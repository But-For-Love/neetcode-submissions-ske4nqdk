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
        ListNode* dummy = new ListNode(0);
        dummy->next = reverse(head);
        ListNode* pre = dummy;
        ListNode* cur = dummy->next;
        n--;
        while(n--){
            pre = pre->next;
            cur = cur->next;
        }
        pre->next = pre->next->next;
        return reverse(dummy->next);
    }

    ListNode* reverse(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* next = nullptr;
        while (head != nullptr) {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
};
