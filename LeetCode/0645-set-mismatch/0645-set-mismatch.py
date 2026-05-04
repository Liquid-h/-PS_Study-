class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        seen = set()
        duplicate = -1
        
        for num in nums:
            if num in seen:
                duplicate = num
            else:
                seen.add(num)
        
        n = len(nums)
        missing = (set(range(1, n + 1)) - seen).pop()
        
        return [duplicate, missing]