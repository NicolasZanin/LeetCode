from typing import List

"""
# First Solution
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dico = {}

        for i, num in enumerate(nums):
            indexes = dico.get(num)

            if indexes is not None:
                indexes.append(i)
            else:
                dico[num] = [i]

        for key in dico.keys():
            if target - key == key:
                indexes = dico[key]
                if len(indexes) >= 2:
                    return [indexes[0], indexes[1]]
                else:
                    continue

            elif dico.get(target - key) is not None:
                index1 = dico[key][0]
                index2 = dico[target - key][0]
                return [min(index1, index2), max(index1, index2)]

        return []
"""

"""
# Second Solution
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dico = {}

        for i, num in enumerate(nums):
            existing_number = dico.get(num)
            other_number = dico.get(target - num)

            if existing_number is not None:
                if num * 2 == target:
                    return [existing_number, i]
            elif other_number is not None:
                return [other_number, i]
            else:
                dico[num] = i

        return []
"""

# Last Solution
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dico = {}

        for i, num in enumerate(nums):
            target_index = dico.get(target - num)

            if target_index is not None:
                return [target_index, i]
            else:
                dico[num] = i

        return []