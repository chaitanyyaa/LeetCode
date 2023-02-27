class Solution {
public:
    void rotate(vector<vector<int>>& M) {
        int n = M.size();
        
        //First transpose the matrix once!
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
               swap(M[i][j], M[j][i]);
            }
        }
        
        //Reverse every column!
        for(int i=0; i<n; i++){
            reverse(M[i].begin(), M[i].end());
        }
    }
};