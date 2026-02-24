#include <vector>

using namespace std;

/**
 * Recursive approach
 */
/* class Solution {
    public:
        int dichotomies(int i, int j, vector<int>& nums, int target) {
            if (i > j)
                return i;

            const int middle = (i + j) / 2;

            if (nums[middle] == target)
                return middle;
            if (nums[middle] < target)
                return dichotomies(middle + 1, j, nums, target);

            return dichotomies(i, middle - 1, nums, target);
        }

        int searchInsert(vector<int>& nums, int target) {
            return dichotomies(0, static_cast<int>(nums.size()) - 1, nums, target);
        }
};*/

/**
 * Loop approach
 */
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int i = 0;
            int j = static_cast<int>(nums.size()) - 1;

            while (i <= j) {
                const int middle = (i + j) / 2;

                if (nums[middle] == target)
                    return middle;

                if (nums[middle] < target)
                    i = middle + 1;
                else
                    j = middle - 1;
            }

            return i;
        }
};

int main() {}
