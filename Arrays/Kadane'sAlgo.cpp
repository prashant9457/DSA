class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int currsum = 0;
        int maxsum = INT_MIN;
        
        for(int i=0 ; i<arr.size(); i++ ) {
            currsum+=arr[i];
            maxsum=max(currsum,maxsum);
            if(currsum<0) currsum = 0;
        }
        return maxsum;
    }
};
