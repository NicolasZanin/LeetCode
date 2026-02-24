#include <iostream>
#include <ostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
    const unordered_map<char, int> romanLetterValues = {
        {' ', 0},
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    public:
        int romanToInt(string s) {
            char last_letter = ' ';
            int number = 0;

            for (char c : s) {
                const int ll_score = romanLetterValues.at(last_letter);
                const int cl_score = romanLetterValues.at(c);

                number += cl_score;
                if (ll_score < cl_score)
                    number -= 2 * ll_score;

                last_letter = c;
            }

            return number;
        }
};

int main() {
    Solution s;

    cout << s.romanToInt("III") << endl;
    cout << s.romanToInt("LVIII") << endl;
    cout << s.romanToInt("MCMXCIV") << endl;
}