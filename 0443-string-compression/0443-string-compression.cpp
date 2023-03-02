class Solution {
public:
    int compress(vector<char>& arr) {
        
        int n = arr.size();
        
        
        
        int j = 0;
        
        int i = 0;
        
        while(i < n)
        {
           
            
            int count = 1;
            
            while(i + 1 < n && arr[i] == arr[i + 1])
            {
                count++;
                
                i++;
            }
            
            
            
            if(count == 1)
            {
                arr[j++] = arr[i];
            }
            else
            {
                arr[j++] = arr[i];
                string str = to_string(count);
                
                for(int k = 0; k < str.size(); k++)
                {
                    arr[j++] = str[k];
                }
            }
            
            i++;
        }
        
        return j;
    }
};