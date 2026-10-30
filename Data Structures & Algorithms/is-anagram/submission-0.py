class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d = {}
        for c in s:
            if c in d:
                d[c] += 1
            else:
                d[c] = 1
        for c in t:
            if c in d:
                d[c] -= 1
            else:
                return False
        for e in d.values():
            if e != 0:
                return False
        return True
        