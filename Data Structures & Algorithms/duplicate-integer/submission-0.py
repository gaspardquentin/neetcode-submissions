class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        appearance = {}
        for n in nums:
            try:
                appearance[n]
                return True
            except:
                appearance[n] = n
        return False