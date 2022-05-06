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
    ListNode* deleteDuplicates(ListNode* head) {
       
       ListNode* temp  = new ListNode(0);  
        temp->next = head;    //temp->next is pointing to head as it is neccessary to hold the head pointer
        ListNode* prev = temp;
        
        while(head != NULL){
            if(head->next !=NULL and head->val == head->next->val)
            {    
                while(head->next !=NULL and head->val == head->next->val)
                {  
                    head = head->next;   //keep moving to the next node as this node is repeated
                }
                prev->next = head->next;    
// once the loop breaks that means this is the next node to be in the list hence point it with the prev->next. 
            }
            else
            {
                prev = prev->next;   // else keep traversing 
            }
            head = head->next;
        }
        return temp->next; 
    }
};