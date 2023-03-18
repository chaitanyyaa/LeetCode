class Solution {
public:
    string thousandSeparator(int n) 
    {
        string ans = to_string(n);   
        if(n>=1000)
        {
            for(int i=ans.length();i>0;i-=3)
                if(i<ans.length())
                    ans.insert(i,".");
        }
        return ans;
    }
};