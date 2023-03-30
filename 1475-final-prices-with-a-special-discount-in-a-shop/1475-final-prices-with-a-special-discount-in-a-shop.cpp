class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        
        vector<int> ans;
        
        for(int i= 0; i<p.size();i++){
            int discount = p[i];
            for(int j=i+1 ; j<p.size();j++){
                if(p[i]>=p[j]){
                    discount = p[i]-p[j];
                    break;
                }
            }
            
            ans.push_back(discount);
        }
        return ans;
    }
};