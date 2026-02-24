#include <vector>

using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int index_not_val = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != val) {
                    nums[index_not_val++] = nums[i];
                }
            }

            return index_not_val;
        }
};

int main() {}
