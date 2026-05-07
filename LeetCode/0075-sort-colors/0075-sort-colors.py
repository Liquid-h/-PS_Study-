class Solution:
    def sortColors(self, nums: List[int]) -> None:

        left, right = 0, len(nums) - 1
        pivot = 0

        while pivot <= right:
            if nums[pivot] == 0:
                nums[left], nums[pivot] = nums[pivot], nums[left]
                left += 1
                pivot += 1
            elif nums[pivot] == 2:
                nums[right], nums[pivot] = nums[pivot], nums[right]
                right -= 1
            else:
                pivot += 1
                