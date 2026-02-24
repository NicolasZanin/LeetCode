#include <iostream>

using namespace std;

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
 * Recursive Solution
 */
/*class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if (!list1 && !list2)
                return nullptr;
            if (!list1)
                return list2;
            if (!list2)
                return list1;

            if (list1->val <= list2->val)
                return new ListNode(list1->val, mergeTwoLists(list1->next, list2));

            return new ListNode(list2->val, mergeTwoLists(list1, list2->next));
        }
};*/

/**
 * Loop Solution
 */
class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode list;
            ListNode *current = &list;

            while (list1 != nullptr && list2 != nullptr) {
                if (list1->val < list2->val) {
                    current->next = list1;
                    list1 = list1->next;
                }
                else {
                    current->next = list2;
                    list2 = list2->next;
                }

                current = current->next;
            }

            if (list1 != nullptr)
                current->next = list1;

            if (list2 != nullptr)
                current->next = list2;

            return list.next;
        }
};

int main() {

}