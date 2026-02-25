#include <iostream>
#include <string>

using namespace std;

/**
 * First Solution
 */
class Solution {
    static char addBinary(const char a, int &increment) {
        if (increment == 1) {
            const int add = a - '0' + increment;
            increment = add / 2;
            return static_cast<char>(add % 2 + '0');
        }

        return a;
    }

    public:
        string addBinary(string a, string b) {
            string get;
            int sizeA = static_cast<int>(a.size()) - 1;
            int sizeB = static_cast<int>(b.size()) - 1;
            int increment = 0;

            while (sizeA >= 0 && sizeB >= 0) {
                const int add = a[sizeA--] + b[sizeB--] - 2 * '0' + increment;
                get += static_cast<char>(add % 2 + '0');
                increment = add / 2;
            }

            while (sizeA >= 0) {
                get += addBinary(a[sizeA--], increment);
            }

            while (sizeB >= 0) {
                get += addBinary(b[sizeB--], increment);
            }

            if (increment == 1)
                get += '1';

            string res;

            for (int i = static_cast<int>(get.size()) - 1; i >= 0; i--) {
                res.push_back(get[i]);
            }

            return res;
        }
};

int main() { }
