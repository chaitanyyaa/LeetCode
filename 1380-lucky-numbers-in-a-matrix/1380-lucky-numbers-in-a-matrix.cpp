class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
      vector<int>ans;
      
      int n = matrix.size();
      int m = matrix[0].size();
      for(int i=0; i<n ; i++)
      {
        int min = 1000005;
        int index = -1;
        for(int j=0 ; j< m ; j++)
        {
          if(matrix[i][j]<min)
          {
            min = matrix[i][j];
            index = j;
          }
        }
      
      int max= -1;
      for(int j=0 ;j< n ; j++)
      {
        if (matrix[j][index] > max)
        {
          max = matrix[j][index];
        }
      }
      if(max==min)
      {
        ans.push_back(max);
      }
    }
      return ans;
    }
};