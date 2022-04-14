# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def CreateNode(p: Optional[ListNode]):
    l = ListNode()
    p.next = l
    return


class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry = 0
        l1_p = l1
        l2_p = l2
        res = ListNode()
        res_p = res
        while l1_p != None and l2_p != None:
            s = l1_p.val + l2_p.val + carry
            carry = int(s/10)
            s = s % 10
            res_p.val = s
            l1_p = l1_p.next
            l2_p = l2_p.next
            if l1_p == None and l2_p == None:
                break
            CreateNode(res_p)
            res_p = res_p.next
            
        if l1_p == None:
            while l2_p != None:
                s = l2_p.val + carry
                carry = int(s/10)
                s = s % 10
                res_p.val = s
                l2_p = l2_p.next
                if l2_p == None:
                    break
                CreateNode(res_p)
                res_p = res_p.next
            
        if l2_p == None:
            while l1_p != None:
                s = l1_p.val + carry
                carry = int(s/10)
                s = s % 10
                res_p.val = s
                l1_p = l1_p.next
                if l1_p == None:
                    break
                CreateNode(res_p)
                res_p = res_p.next
        
        if carry != 0:
            CreateNode(res_p)
            res_p = res_p.next
            res_p.val = carry
                
        return res