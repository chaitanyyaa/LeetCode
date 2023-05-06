class Solution:
    def findPairs(self, nums: List[int], k: int) -> int:
        hashmap = Counter(nums)
        count=0
        
        for idx in hashmap.keys():
            if k>0 and idx+k in hashmap:
                count+=1
            elif k==0 and hashmap[idx]>1:
                count+=1
                
        return count