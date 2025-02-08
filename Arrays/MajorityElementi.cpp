class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,ans=nums[0];
        for (int val : nums) {
            if(freq==0){
                ans=val;
            }
            if(val == ans) {
                freq++;
            }
            else {
                freq--;
            }
            
        }
        return ans;
    }
};
