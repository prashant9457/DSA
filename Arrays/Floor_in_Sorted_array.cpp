class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        // Your code here
        
        int end = arr.size()-1;
        int st = 0; 
        int ans = -1;
        
        if(arr[end]<k) return end;
        
        while(st<=end) {
            int mid = st + (end-st)/2;
            if(arr[mid]==k) {
                ans = mid;
                break;
            }
            else if(arr[mid]<k) st=mid+1;
            else {
                ans = mid-1;
                end = mid-1;
            
            }
        }
        
        return ans;
    }
};
