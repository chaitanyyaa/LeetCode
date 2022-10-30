class Solution {
public:
    int maxDistance(vector<int> &colors)
    {
        int n = colors.size();
        int start = 0;   
        int end = n - 1; 
        
        while (colors[0] == colors[end])
            end--;
        while (colors[n - 1] == colors[start])
                start++;
        return max(end, n - start - 1);
    }
};