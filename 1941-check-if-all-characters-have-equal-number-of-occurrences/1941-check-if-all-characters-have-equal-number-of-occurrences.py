class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        return len(set([s.count(i) for i in s])) == 1