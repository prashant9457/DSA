class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0 ;
        int end = nums.size();
        if(nums[st]>target) return 0;
        if(nums[end-1]<target) return end;
        int ans = 0;
        while(st<=end) {
            int mid = st + (end-st)/2;

            if(nums[mid]==target) {
                ans = mid;
                break;
            }
            else if(nums[mid]<target) {
                st = mid+1;
                ans = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
                ans = mid;
            }
        }
        return ans;
    }
};
