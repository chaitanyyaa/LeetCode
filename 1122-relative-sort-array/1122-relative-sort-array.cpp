class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size();
        int n2=arr2.size();
        vector<int>temp;
       int j=0;
       int k=0;
       while(j<n2){
           for(int i=j;i<n1;i++){
               if(arr1[i]==arr2[j]){
                   swap(arr1[k],arr1[i]);
                   k++;
               }
           }
           j++;
       }
     sort(arr1.begin()+k,arr1.end());
        return arr1;
    }
};