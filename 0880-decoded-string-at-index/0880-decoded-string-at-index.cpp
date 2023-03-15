class Solution {
public:
    string decodeAtIndex(string s, int k) {
        
        vector<long> Nlen(s.size());
        
        Nlen[0] = 1;
        int i=1;
        
        while(Nlen[i-1]< k){
            if(isalpha(s[i])){
                Nlen[i] = Nlen[i-1]+1;
                
            }else{
                Nlen[i] = (s[i]-'0')*(Nlen[i-1]);
            }
            
            i++;
      }
        --i;
        
        while(Nlen[i]>k){
            --i;
            if(Nlen[i]<k){
                
                k = ((k-1)%Nlen[i])+1;
            }
            
        }
        while(isdigit(s[i]))--i;
        return s.substr(i,1);
        
    }
};