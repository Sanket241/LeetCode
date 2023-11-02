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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return NULL;
        }
        while(head && (head -> val == val)){
                ListNode* tempnode = head;
                head = head -> next;
                delete tempnode;
        }
        ListNode* curr = head;
        ListNode* prev = head;
        
        while(curr != NULL){
            if(curr -> val == val){
                ListNode* tempnode = curr;
                prev -> next = curr -> next;
                curr = curr -> next;
                delete tempnode;
            }
            else{

            prev = curr;
            curr = curr -> next;
            }
        }
        return head;
    }
};