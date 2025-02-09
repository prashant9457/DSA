class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        stack<int> stk;
        int st = 0;
        int ans = INT_MIN;
        int open =0;
        while(st<n) {
            if(s[st]=='(') {
                open++;
                stk.push(s[st]);
            }
            if(s[st]==')') {
                open--;
                stk.pop();
            }
            if(stk.empty()) {
                open=0;
            }
            ans = max(open, ans);
            st++;
        }
        return ans;
    }
};
