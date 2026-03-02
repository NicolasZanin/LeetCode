/**
* Definition for singly-linked list.
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


/**
 * Loop Approach
 */
class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            if (head == nullptr)
                return head;

            ListNode *current = head->next;
            ListNode *previous = head;

            while (current != nullptr) {
                if (previous->val == current->val) {
                    previous->next = current->next;
                }
                else {
                    previous = current;
                }

                current = current->next;
            }

            return head;
        }
};


int main() { }