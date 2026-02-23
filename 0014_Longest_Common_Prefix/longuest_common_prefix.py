from typing import List

"""First Solution with try except
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        longuest_common_prefix = ""

        try:
            for i in range(len(strs[0])):
                current_car = strs[0][i]

                for string in strs:
                    if current_car != string[i]:
                        return longuest_common_prefix

                longuest_common_prefix += current_car
            return longuest_common_prefix
        except IndexError:
            return longuest_common_prefix
"""

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        longuest_common_prefix = ""

        for i in range(len(strs[0])):
            current_car = strs[0][i]

            for string in strs:
                if i >= len(string) or current_car != string[i]:
                    return longuest_common_prefix

            longuest_common_prefix += current_car
        return longuest_common_prefix

s = Solution()
print(s.longestCommonPrefix(["dog","racecar","car"]))