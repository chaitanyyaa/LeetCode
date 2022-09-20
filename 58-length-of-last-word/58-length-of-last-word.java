class Solution {
    public int lengthOfLastWord(String s) {
        
        String[] words = s.split(" ");
        return words.length == 0 ? 0: words[words.length-1].length();
    }
}