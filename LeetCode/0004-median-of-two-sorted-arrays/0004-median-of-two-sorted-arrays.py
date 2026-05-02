class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        um = sorted(nums1 + nums2)
        if len(um) % 2 == 0:
            return (um[len(um) // 2 - 1] + um[len(um) // 2]) / 2
        else:
            return um[len(um) // 2]