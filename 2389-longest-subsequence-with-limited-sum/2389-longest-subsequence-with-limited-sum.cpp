class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        int n = nums.size();
        int m = queries.size();
        
        sort(nums.begin(),nums.end());
        int sum = 0;
        vector<int> prefix_sum;
        
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            prefix_sum.push_back(sum);           
        }
        
        vector<int> answer(m,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(prefix_sum[j] <= queries[i]) answer[i] = j+1;          
                else break;
            }
        }
        return answer;
    }
};