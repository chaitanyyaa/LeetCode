class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        
        HashSet<Character> ans=new HashSet<>();
        int count=0;
        
        for(int i=0;i<jewels.length();i++) ans.add(jewels.charAt(i));
        
        for(int i=0;i<stones.length();i++) if(ans.contains(stones.charAt(i)))                   
            count++;
        
        return count;
    }
}