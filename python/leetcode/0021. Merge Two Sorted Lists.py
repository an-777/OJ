# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy: ListNode | None = ListNode(0)
        now: ListNode = dummy
        while list1 is not None and list2 is not None:
            if list1.val > list2.val:
                mn:int = list2.val
                list2 = list2.next
            else:
                mn:int = list1.val
                list1 = list1.next
            now.next = ListNode(mn)
            now = now.next

        while list1 is not None or list2 is not None:
            if list2 is not None:
                mn:int = list2.val
                list2 = list2.next
            else:
                mn:int = list1.val
                list1 = list1.next
            now.next = ListNode(mn)
            now = now.next
        return dummy.next