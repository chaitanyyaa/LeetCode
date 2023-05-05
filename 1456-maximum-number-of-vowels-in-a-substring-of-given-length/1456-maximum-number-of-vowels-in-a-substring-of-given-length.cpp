class Solution {
public:
    int maxVowels(string s, int k) {
       
        unordered_set<char> vowels{'a','e','i','o','u'};
        
        int count=0;
        int max_cnt=0;
        
        for( int i=0 ;i<s.length() ;i++){
            
            if(i>=k && vowels.count(s[i-k])){
                count--;
            }
            
            if(vowels.count(s[i])){
                count++;
            }
            max_cnt = max(max_cnt,count);
        }
        
    return max_cnt;
        
    }
};