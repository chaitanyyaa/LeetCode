#define inf (1<<30)
class Solution {
public:
    
     set<pair<int,int>>vis; 
    int solve ( int i , int j , int n){
        
       
        
        if ( i > n) return inf ;
        
        if (i==n) return 0;
        
         if(vis.find({i,j}) != vis.end())
             return inf;
        else
            vis.insert({i,j});
        
        int op1 = 1+ solve( i,i,n);
        int op2 = 1 + solve(i+j ,j , n);
        
        return min( op1,op2);
    }
    int minSteps(int n) {
            vis.clear();
        return solve( 1 , 0 , n);
    }
};