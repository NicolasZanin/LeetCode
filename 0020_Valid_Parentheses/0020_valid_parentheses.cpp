#include <iostream>
#include <ostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
    bool checkCloseParentheses(const char last_parentheses,const char current_parentheses ) {
        if (last_parentheses == '(')
            return current_parentheses == ')';

        if (last_parentheses == '{')
            return current_parentheses == '}';

        return current_parentheses == ']';
    }

    public:
        bool isValid(string s) {
            stack<char> open_parentheses;

            for (char current : s) {
                if (current == '(' || current == '[' || current == '{') {
                    open_parentheses.push(current);
                }

                else if (open_parentheses.empty())
                    return false;

                else {
                    const char last_parentheses = open_parentheses.top();
                    open_parentheses.pop();

                    if (!checkCloseParentheses(last_parentheses, current))
                        return false;
                }
            }

            return open_parentheses.empty();
        }
};

int main() {
    Solution sol;

    cout << sol.isValid("()") << endl;
    cout << sol.isValid("()[]{}") << endl;
    cout << sol.isValid("(]") << endl;
    cout << sol.isValid("([])") << endl;
    cout << sol.isValid("([)]") << endl;
}