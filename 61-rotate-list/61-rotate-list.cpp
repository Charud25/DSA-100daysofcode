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
        
       if(!head || !head->next || k==0)    return head;     // edge cases
       ListNode* p ; 
        ListNode* curr = head ;
        int len = 0;
        while(curr)
        {
            len++;
            curr= curr->next;
        }
        
        k=k%len;
        curr = head;
        while(k){     
            while(curr->next){
                p=curr;
                curr=curr->next;
            }
            curr->next=head;
            p->next=NULL;
            head=curr;
            k--;
        }
        return head;
        
    }
};