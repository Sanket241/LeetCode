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
    ListNode* rotateRight(ListNode* head, int k) {
          if (!head || !head->next || !k) {
            return head;
        }
        // dummy curr
        ListNode* curr = head;
        // finding length
        int len = 1;
        while(curr->next) {
            curr = curr->next;
            ++len;
        }
        curr->next = head;
        // we will traverse from start instead so take len - k instead
        k = k % len;
        k = len - k;
        // lets start traversing
        while(k--) {
            curr = curr->next;
        }
        head = curr->next;
        curr->next = NULL;

        return head;
    }
};