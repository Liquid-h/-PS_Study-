class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        result = []
        for i in range(0, len(nums)):
            if nums[i] != val:
                result.append(nums[i])
        nums[:] = result
        return len(nums)