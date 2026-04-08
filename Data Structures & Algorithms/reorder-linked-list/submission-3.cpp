class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // 1. 快慢指针找中点
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. 反转后半部分，并把前后半部分断开
        ListNode* l1 = head;
        ListNode* l2 = reverse(slow->next);
        slow->next = nullptr; // 【关键修复】：切断前半段和后半段的联系

        // 3. 原地合并 l1 和 l2
        merge(l1, l2);
    }

    // 你的 reverse 写得很标准，完全没问题
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

    // 【关键修复】：原地穿针引线合并，不需要 new 新节点，也不用返回 head
    void merge(ListNode* l1, ListNode* l2) {
        while (l1 != nullptr && l2 != nullptr) {
            // 先记录下一个节点
            ListNode* l1_next = l1->next;
            ListNode* l2_next = l2->next;

            // 把 l2 插到 l1 后面
            l1->next = l2;
            l2->next = l1_next;

            // 两个指针同时后移
            l1 = l1_next;
            l2 = l2_next;
        }
    }
};