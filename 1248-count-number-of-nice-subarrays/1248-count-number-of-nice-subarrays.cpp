class Solution {
public:
    
    int numberOfSubarrays(vector<int>& a, int k) {
        int ans=0,sum=0,n=a.size();
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=a[i]%2; 
            if(mp.find(sum-k)!=mp.end())
                ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};