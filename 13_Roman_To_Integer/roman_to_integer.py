""" First Solution
class Solution:
    enum = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

    def getScore(self, ll: str, cl: str) -> int:
        score = self.enum[cl]
        if ll == 'C' and (cl == 'M' or cl == 'D'):
            return score - 200
        elif ll == 'X' and (cl == 'L' or cl == 'C'):
            return score - 20
        elif ll == 'I' and (cl == 'V' or cl == 'X'):
            return score - 2

        return score

    def romanToInt(self, s: str) -> int:
        last_letter = ''
        number = 0

        for c in s:
            number += self.getScore(last_letter, c)
            last_letter = c

        return number
"""

class Solution:
    enum = {'': 0, 'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

    def romanToInt(self, s: str) -> int:
        last_letter = ''
        number = 0

        for c in s:
            ll_score = self.enum[last_letter]
            cl_score = self.enum[c]

            number += cl_score
            if ll_score < cl_score:
                number -= 2 * ll_score
            last_letter = c

        return number

s = Solution()
print(s.romanToInt("III"))
print(s.romanToInt("LVIII"))
print(s.romanToInt("MCMXCIV"))