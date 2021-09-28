/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr = head;
        int len = 0;
        while(ptr != NULL)
        {
            ptr = ptr->next;
            len++;
        }
        
        if(len == 1 && n == 1)
        {
            head = NULL;
            return head;
        }
        
        ptr = head;
        if(len == n)
        {
            head = head->next;
            return head;
        }
        int d_idx = len - n;
        for(int i = 1; i < d_idx; ++i)
            ptr = ptr->next;
        ptr->next = ptr->next->next;
        return head;
    }
};