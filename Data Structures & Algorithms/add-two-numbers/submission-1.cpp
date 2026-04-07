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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();

        ListNode* cur = nullptr;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr)
        {
            int val1 = l1 != nullptr ? l1->val : 0;
            int val2 = l2 != nullptr ? l2->val : 0;
            int acc = val1 + val2 + carry;
        
            if(cur == nullptr) cur = head;
            else 
            {
                cur->next = new ListNode();
                cur = cur->next;
            }

            cur->val = acc % 10;
            carry = acc / 10;

            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }

        if(carry > 0)
        {
            cur->next = new ListNode(1);
        }

        return head;
    }
};
