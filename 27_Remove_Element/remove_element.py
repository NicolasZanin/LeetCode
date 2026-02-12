from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        index_not_val = 0

        for i in range(len(nums)):
            if nums[i] != val:
                nums[index_not_val] = nums[i]
                index_not_val += 1

        return index_not_val