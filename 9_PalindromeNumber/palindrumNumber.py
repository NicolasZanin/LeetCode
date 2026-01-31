from math import floor


class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        if x < 10:
            return True

        j = 1
        numbers = 1
        while x / j > 9:
            j *= 10
            numbers += 1


        i = 1
        for _ in range(floor(numbers / 2)):
            if x / j % 10 != x / i % 10:
                return False

            i *= 10
            j /= 10

        return True



s = Solution()
print(s.isPalindrome(100))