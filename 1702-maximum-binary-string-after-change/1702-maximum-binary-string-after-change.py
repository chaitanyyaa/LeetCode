class Solution(object):
     def maximumBinaryString(self, s):
        if '0' not in s: return s
        k, n = s.count('1', s.find('0')), len(s)
        return '1' * (n - k - 1) + '0' + '1' * k