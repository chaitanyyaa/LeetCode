class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        int c=1;
        
        int n = grades.size();
        
        while(c*(c+1)/2 <= n) c++;
        
        return --c;
    }
};