#include <vector>

using namespace std;

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

int main() {}