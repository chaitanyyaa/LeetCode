
class Solution {
    public int longestConsecutive(int[] nums) {
      
      if(nums.length == 0)
        return 0;
      
      
      Arrays.sort(nums);
      int x = 1;
      int y = 1;
      
      for(int i = 0; i < nums.length - 1; i++){
        
        if(nums[i] == nums[i + 1])
          continue;
        
        if (nums[i] + 1 == nums[i + 1])
          x++;
        
        if(nums[i] + 1 != nums[i + 1] && y <= x){
          y = x;
          x = 1;
        }else if (nums[i] + 1 != nums[i + 1] && x > 1)
          x = 1;
        
      }
      
      return Math.max(x,y);
    }
}