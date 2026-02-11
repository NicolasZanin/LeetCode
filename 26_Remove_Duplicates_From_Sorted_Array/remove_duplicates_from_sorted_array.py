from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        unique_index = 0

        for i in range(1, len(nums)):
            if nums[i] != nums[unique_index]:
                nums[unique_index + 1] = nums[i]
                unique_index += 1

        return unique_index + 1


def test(nums: List[int], expected: List[int]) -> None:
    s = Solution()
    k_index = s.removeDuplicates(nums)

    for i in range(k_index):
        assert nums[i] == expected[i]

numsTest1 = [1, 1, 2]
expectedTest1 = [1, 2]
numsTest2 = [0,0,1,1,1,2,2,3,3,4]
expectedTest2 = [0, 1, 2, 3, 4]

test(numsTest1, expectedTest1)
test(numsTest2, expectedTest2)