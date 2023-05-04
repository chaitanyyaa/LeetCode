class Solution {
public:
    int balancedStringSplit(string s) {
        
        map<int,int> mp;
        
        int count =0;
        
        for(char c :s){
            mp[c]++;
            if(mp['R']==mp['L'])
                count++;
        }
        return count;
        
    }
};