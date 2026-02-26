#include <vector>

using namespace std;

/**
 * First Solution by approximation
 */
class Solution {
    public:
        int mySqrt(int x) {
            if (x <= 1)
                return x;

            int last_value = x / 2;
            int result = (last_value + x / last_value) / 2;

            while (last_value > result) {
                last_value = result;
                result = (last_value + x / last_value) / 2;
            }

            return last_value;
        }
};


/**
 * Second Solution by dichotomy
 */
/*class Solution {
    public:
        int mySqrt(int x) {
            int left = 0, right = x;

            while (left <= right) {
                const int mid = left + (right - left) / 2;
                const long long square = static_cast<long long>(mid) * mid;

                if (square == x) {
                    return mid;
                }

                if (square > x) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            return right;
        }
};*/

int main() { }