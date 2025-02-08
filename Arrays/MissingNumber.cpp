class Solution {
public:
int missingNumber(vector<int>& arr) {
        int sum =0;
        int arrsum =0;
        for(int i =0; i<arr.size(); i++) {
            sum +=i+1;
            arrsum += arr[i];
        }

        if(arrsum>sum) return 0;
        else return sum-arrsum;
        
    }
};
