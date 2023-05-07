class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:        
        s =[]
        n = len(matrix)
        
        for i in range(n):
            for j in range(n):
                s.append(matrix[i][j])
            
            
        s.sort()
        return s[k-1]