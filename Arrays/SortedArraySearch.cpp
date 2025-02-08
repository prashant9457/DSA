class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int st = 0 ;
        int end = arr.size()-1;
        while(st<=end) {
            int mid = st+(end-st)/2;
            if(arr[mid]==k) return true;
            if(arr[mid]>=k) end = mid-1;
            else st = mid+1;
        }
        return false;
    }
};
