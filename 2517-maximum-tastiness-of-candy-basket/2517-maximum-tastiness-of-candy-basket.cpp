class Solution {
public:
    
    bool check(vector<int> &price , int k , int taste){
        
        int curr = price[0] , cnt=1;
        
        for( int i=1 ; i<price.size();i++){
            if(price[i]-curr >= taste){
                curr= price[i];
                cnt++;
            }
        }
        if(cnt>= k){ 
            return true;
        }else{
        
            return false;

        } 
    }
    
    int maximumTastiness(vector<int>& price, int k) {
       sort(price.begin() , price.end());
        int low=0;
        int high = price[price.size()-1] - price[0];
        int ans =0;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(check(price , k , mid)==true){
                ans = mid;
                low = mid+1;
            }else{
                high = mid -1;
            }
        }
        return ans;
        
    }
};