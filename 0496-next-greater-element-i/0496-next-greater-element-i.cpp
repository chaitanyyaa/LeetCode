class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       
      unordered_map<int,int>umap;
      stack<int> s;
      int n = nums2.size()-1;
      
      for(int i=n ; i>=0; i--)
      {
        int ele = nums2[i];
       while(!s.empty() && s.top() <= ele)
          {
            s.pop();
          }
        int res = (s.empty()) ? -1 :s.top();
        umap.insert({ele  , res});
        s.push(ele);
      }
       vector<int> ans;
      for(auto x: nums1)
      {
        ans.push_back(umap[x]);
      }
      return ans;
       
    }
};