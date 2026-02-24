#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string longestCommonPrefix;

            for (int i = 0; i < strs[0].size(); i++) {
                const char current = strs[0][i];

                for (string &str : strs) {
                    if (i >= str.size() || str[i] != current)
                        return longestCommonPrefix;
                }

                longestCommonPrefix += current;
            }

            return longestCommonPrefix;
        }
};

int main() {
    Solution s;
    vector<string> strs = {"flower","flower","flower","flower"};
    cout << s.longestCommonPrefix(strs) << endl;
}