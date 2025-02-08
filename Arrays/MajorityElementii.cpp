class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int ele1 =INT_MIN, ele2=INT_MIN;
        int cnt1 = 0, cnt2 = 0;
        int n = arr.size();
        for(int val : arr ) {//finding possible elements...
            if(val==ele1) cnt1++;
            
            else if(val==ele2) cnt2++;
            
            else if(cnt1 == 0){
                ele1 = val;
                cnt1++;
            }
            else if(cnt2 == 0){
                cnt2++;
                ele2 = val;
            }
            else { 
                cnt1--;
                cnt2--;
            }
        }
        vector <int> majority;
        cnt1=0;
        cnt2=0;
        for(int val: arr) {//counting ele1 occurance in array
            if(val==ele1) cnt1++;
            if(val==ele2) cnt2++;
        }    
        if(cnt1 > (n/3)){
            majority.push_back(ele1);
        }
        if(cnt2 > (n/3)){
            majority.push_back(ele2);
        }
        if(majority.size() > 1 && majority[0]>majority[1]){
            swap(majority[0],majority[1]);
        }
        return majority;
    }
};
