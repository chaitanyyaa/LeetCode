class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        //1 2 2 5 6 6 
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0 ; i< nums.size(); i+=2)
        {
            ans+=nums[i];
        }
        
        return ans;
    }
};