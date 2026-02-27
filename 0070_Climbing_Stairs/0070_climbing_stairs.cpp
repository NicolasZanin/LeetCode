#include <iostream>

using namespace std;

/**
 * Fibonacci approach
 */
class Solution {
    public:
        int climbStairs(int n) {
            if (n <= 2)
                return n;

            int n_minus_1 = 1;
            int n_minus_2 = 2;

            for (int i = 3; i <= n; i++) {
                const int temp = n_minus_2;

                n_minus_2 = n_minus_1 + n_minus_2;
                n_minus_1 = temp;
            }

            return n_minus_2;
        }
};

int main() {}