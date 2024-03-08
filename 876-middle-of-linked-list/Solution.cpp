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
    ListNode* middleNode(ListNode* head) {
        if (!head) return head;
        if (!head->next) return head;

        ListNode* fast = head;
        ListNode* slow = head;

        while (fast->next != nullptr) {
            fast = fast->next;
            if (fast->next) {
                fast = fast->next;
            }
            slow = slow->next;
        }

        return slow;
    }
};