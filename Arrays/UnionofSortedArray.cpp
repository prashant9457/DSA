class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector <int> ans; 
        
        int n = a.size();
        int m = b.size();
        
        int i =0;
        int j =0;
        
        while(i<n && j<m) {
            
            if(a[i] <= b[j]) {
                if(ans.size()==0 || ans.back()!=a[i]) {
                    ans.push_back(a[i]);
                }
                i++;
            }
            else {
                if(ans.size()==0 || ans.back()!=b[j]) {
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<n) {
            if(ans.back()!=a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<m){
            if(ans.back()!=b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }
        
        return ans;
        
    }
