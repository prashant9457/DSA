class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int leftright = 1;
        int rightleft = 1; 
        
        int maxprod = INT_MIN;
        int n = arr.size()-1;
        
        for(int i =0 ; i<arr.size(); i++) {
            if(leftright==0) leftright =1;
            if(rightleft==0) rightleft =1;
            
            leftright *=arr[i];
            rightleft *=arr[n];
            n--;
            
            maxprod = max(leftright,max(rightleft, maxprod));
        }
        
        return maxprod;
    }
};
