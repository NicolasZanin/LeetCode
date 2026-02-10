class Solution:
    def checkCloseParentheses(self, last_parentheses: str, current_parentheses: str) -> bool:
        if last_parentheses == '(':
            return current_parentheses == ')'
        elif last_parentheses == '{':
            return current_parentheses == '}'

        return current_parentheses == ']'

    def isValid(self, s: str) -> bool:
        stack = []

        for char in s:
            if char == '(' or char == '{' or char == '[':
                stack.append(char)
            elif not stack:
                return False
            else:
                last_parentheses = stack.pop()

                if not self.checkCloseParentheses(last_parentheses, char):
                    return False

        return not stack

sol = Solution()
print(sol.isValid("()"))
print(sol.isValid("()[]{}"))
print(sol.isValid("(]"))
print(sol.isValid("([])"))
print(sol.isValid("([)]"))