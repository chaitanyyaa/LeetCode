class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        int ans =1;
        
        sort(p.begin(),p.end());
        
        int endpoint = INT_MAX;
        
        for(auto x:p){
            int start = x[0];
            
            int end = x[1];
            if(endpoint < start){
                ans++;
                endpoint = end;
            }else{
                endpoint = min(endpoint, end);
            }
        }
            
            return ans;   
        
    }
};