class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
     unordered_map<int, int> mp;
    int n = fruits.size(), ans = 0, j = 0;
    for(int i = 0; i < n; i++)
    {
        mp[fruits[i]]++;
        while(mp.size() > 2)
            if(--mp[fruits[j++]] == 0)
                mp.erase(fruits[j - 1]);
        
        ans = max(ans, i - j + 1);
    }
    
     return ans;
    }
};