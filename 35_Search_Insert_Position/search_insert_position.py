from typing import List


class Solution:
    def dichotomies(self, i: int, j: int, nums: List[int], target: int) -> int:
        if i > j:
            return i

        middle = (i + j) // 2

        if nums[middle] == target:
            return middle
        elif nums[middle] < target:
            return self.dichotomies(middle + 1, j, nums, target)
        else:
            return self.dichotomies(i, middle - 1, nums, target)



    def searchInsert(self, nums: List[int], target: int) -> int:
        return self.dichotomies(0, len(nums) - 1, nums, target)

s = Solution()
print(s.searchInsert([1,2,3,4,5], 5))
print(s.searchInsert([1,3,5,6], 2))
print(s.searchInsert([1,3,5,6], 7))