#include <string>

using namespace std;

class Solution {
    public:
        int lengthOfLastWord(string s) {
            int size = static_cast<int>(s.length()) - 1;

            while (s[size] == ' ' && size >= 0)
                size--;

            for (int i = size; i >= 0; i--) {
                if (s[i] == ' ')
                    return size - i;
            }

            return size + 1;
        }
};

int main() {}