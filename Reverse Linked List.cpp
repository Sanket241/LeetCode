// class Solution {
// public:
// void reverse(ListNode* &head,ListNode* &prev,ListNode* &curr){
//     if(curr == NULL){
//         head = prev;
//         return;
//     }
//     ListNode* forward = curr -> next;
//     reverse(head,curr,forward);
//     curr -> next = prev;
// }
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         reverse(head,prev,curr);
//         return head;
        
//     }
// };