bool isPalindrome(string str){
    int left=0;
    int right=str.size()-1;
    
    while(left<=right){
        if(str[left] != str[right])
            return false;
            left++;
            right--;
        
    }
    return true;
}




class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0 ; i< words.size(); i++){
            
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
    }
};