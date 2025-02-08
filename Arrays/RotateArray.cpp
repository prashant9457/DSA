class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        
        if(k>arr.size()) k%=arr.size();
        int st1=0, st2=arr.size()-k, end2=arr.size()-1;
        int end1=st2-1;
        for( st1=0; st1<end1; st1++ ) {//reverse first half
            if(st1>end1) break;
            swap(arr[st1], arr[end1]);
            end1--;
        }
        for( st2=arr.size()-k; st2<end2; st2++) {//reverse second half
            if(st2>end2) break;
            swap(arr[st2],arr[end2]);
            end2--;
        }
        
        int end=arr.size()-1;
        
        for(int i=0; i<arr.size(); i++){//reverse whole array
            if(i>end)break;
            swap(arr[i],arr[end]);
            end--;
        }
    }
};
