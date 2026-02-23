from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

"""First Solution
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        current_el_l1 = list1
        current_el_l2 = list2

        if list1 is None:
            return list2
        elif list2 is None:
            return list1

        if current_el_l1.val <= current_el_l2.val:
            current_value = current_el_l1.val
            current_el_l1 = current_el_l1.next
        else:
            current_value = current_el_l2.val
            current_el_l2 = current_el_l2.next

        result = ListNode(current_value)
        current_element_result = result


        while current_el_l1 and current_el_l2:
            if current_el_l1.val <= current_el_l2.val:
                current_value = current_el_l1.val
                current_el_l1 = current_el_l1.next
            else:
                current_value = current_el_l2.val
                current_el_l2 = current_el_l2.next

            current_element_result.next = ListNode(current_value)
            current_element_result = current_element_result.next

        while current_el_l1:
            current_element_result.next = ListNode(current_el_l1.val)
            current_element_result = current_element_result.next
            current_el_l1 = current_el_l1.next

        while current_el_l2:
            current_element_result.next = ListNode(current_el_l2.val)
            current_element_result = current_element_result.next
            current_el_l2 = current_el_l2.next

        return result
"""

""" 2nde solution with loop
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        result = ListNode()
        current_element_result = result

        while list1 and list2:
            if list1.val <= list2.val:
                current_value = list1.val
                list1 = list1.next
            else:
                current_value = list2.val
                list2 = list2.next

            current_element_result.next = ListNode(current_value)
            current_element_result = current_element_result.next

        if list1:
            current_element_result.next = list1
        elif list2:
            current_element_result.next = list2

        return result.next
"""

# Recursive solution
class Solution:
    def recursiveMerge(self, list1: ListNode, list2: ListNode) -> Optional[ListNode]:
        if list1 and list2:
            if list1.val <= list2.val:
                return ListNode(list1.val, self.recursiveMerge(list1.next, list2))
            else:
                return ListNode(list2.val, self.recursiveMerge(list1, list2.next))

        if list1:
            return list1

        return list2

    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        return self.recursiveMerge(list1, list2)