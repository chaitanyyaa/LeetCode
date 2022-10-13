class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int start1= 0;
        int r= 0;
        unordered_map<char, int> ump;
        
        for( int i = 0; i < s.length(); i++){
            ump[s[i]]++;
            
            while(ump[s[i]]>1){
                ump[s[start1]]--;
                start1++;
            }
             r = max(r , i-start1+1);
        }
        
        return r;
        
    }
};