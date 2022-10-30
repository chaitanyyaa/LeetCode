class Solution {
public:
    vector<int> numberOfPairs(vector<int>& A) {
        int a[101] =  {0};
        
        
        
        for(int i = 0 ; i < A.size() ; i++){
            a[A[i]]++;
        }
        
        
        int khatarnak = 0 , sheeeee = 0;
        for(int j : a){
            khatarnak += j/2;
            sheeeee += j%2;
        }
        return {khatarnak , sheeeee};
    }
};