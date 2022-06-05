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
        
        if(head == NULL)
        {
            return NULL;
        }
        ListNode* curr = head;
        ListNode* prev = new ListNode(0);
        ListNode* temp = prev;
        prev->next=curr;
        while(curr)
        {
           if(curr->val == val)
           {
               prev->next = curr->next;
               //curr->next = NULL;
                curr = prev->next ;
           }
            else
            {
                curr = curr->next ;
                prev = prev->next ;
            }
        }
        return temp->next;
        
    }
};