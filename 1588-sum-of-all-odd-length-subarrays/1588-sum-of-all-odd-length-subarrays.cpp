class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        //1 2 3 4 5
        int temp=0;
        int n= arr.size();
        for(int i=0 ; i< arr.size() ; i++)
        {
            int res= ((i+1)*(n-i)+1)/2;
            temp+=(res*arr[i]);
        }
        return temp;
    }
};
