class Solution {
public:
    int sumOfUnique(vector<int>& v) {
        
        unordered_map<int, int> mp;
        for(int i=0 ; i<v.size() ; i++)
        {
            mp[v[i]]++;
        }
        int sum=0;
        
        for(auto &i:mp)
        {
            if(i.second==1)
            {
                sum+=i.first;
            }
        }
        return sum;
    }
};