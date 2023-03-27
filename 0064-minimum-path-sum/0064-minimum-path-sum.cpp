class Solution {
public:
    int minPathSum(vector<vector<int>>& v) {
        int a=v.size();
        int b=v[0].size();
        for(int i=1;i<b;i++)
        {
            v[0][i]+=v[0][i-1];
            
        }
        for(int i=1;i<a;i++)
        {
            v[i][0]+=v[i-1][0];
        }
        for(int i=1;i<a;i++)
        {
            for(int j=1;j<b;j++)
            {
                int c=v[i-1][j],d=v[i][j-1];
                v[i][j]+=min(c,d);
                
            }
        }
        
        return v[a-1][b-1];
    }
};