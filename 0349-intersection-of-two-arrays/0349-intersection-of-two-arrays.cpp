class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
      set<int> mp(nums1.begin(), nums1.end());
    vector<int> ans;
    for (int val : nums2)
        if (mp.erase(val))
            ans.push_back(val);
  return ans;
    }
};