class Solution {
public:
    int longestSubarray(vector<int>& A) {
        int i = 0, j = 0, N = A.size(), cnt = 0, ans = 0;
        for (; j < N; ++j) {
            cnt += A[j] == 0;
            while (cnt > 1) cnt -= A[i++] == 0;
            ans = max(ans, j - i);
        }
        return ans;
    }
};