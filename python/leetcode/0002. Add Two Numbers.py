# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        res: ListNode = ListNode()
        now: ListNode = res
        carry: int = 0
        while l1 is not None or l2 is not None or carry != 0:
            val1: int = l1.val if l1 is not None else 0
            val2: int = l2.val if l2 is not None else 0

            totol: int = val1 + val2 + carry
            now.next = ListNode(totol % 10)
            carry = totol // 10

            now = now.next
            l1 = l1.next if l1 is not None else None
            l2 = l2.next if l2 is not None else None

        return res.next