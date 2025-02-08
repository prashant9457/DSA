class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<int>> ans(n,vector<int>(n, 0));
        int end = n-1;
        for(int i = 0; i<n; i++) {
            int ind = 0;
            for(int j = 0; j<n; j++) {
                ans[ind][end]=mat[i][j];
                ind++;
            }
            end--;
        }
        for(int i = 0; i<n ; i++) {
            for(int j=0; j<n; j++) {
                mat[i][j]=ans[i][j];
            }
        }
 

    }
};
