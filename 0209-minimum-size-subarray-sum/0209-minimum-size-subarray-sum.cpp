class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX, i = 0, j = 0, n = nums.size(), sum = 0;
        while(j < n){
            sum += nums[j];
            while(sum >= target){
                ans = min(ans, (j-i)+1);
                sum -= nums[i++];
            }
            j++;
        }
        if(ans > n+1) return 0;
        return ans;
    }
};