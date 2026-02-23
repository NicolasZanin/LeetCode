#include <iostream>
#include <ostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> pairs;

            for (int i = 0; i < nums.size(); i++) {
                if (auto target_index = pairs.find(target - nums[i]);
                    target_index != pairs.end())
                    return {target_index->second, i};

                pairs[nums[i]] = i;
            }

            return {};
        }
};

int main() {
    Solution s;
    vector nums = {2, 7, 11, 15};

    const vector sum = s.twoSum(nums, 9);
    cout << sum[0] << " " << sum[1] << endl;
}