#include <iostream>
#include <ostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 or (x % 10 == 0 and x != 0))
            return false;

        int x_reverse = 0;
        while (x_reverse < x) {
            x_reverse = x_reverse * 10 + x % 10;
            x /= 10;
        }

        return x == x_reverse || x == x_reverse / 10;
    }
};

int main() {
    Solution s;
    constexpr int x = 121;

    cout << "is " << x << " palindrome? " << (s.isPalindrome(121)? "true": "false") << endl;
}