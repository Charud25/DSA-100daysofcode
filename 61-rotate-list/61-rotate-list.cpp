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
        ListNode *curr=head,*p;
        int len=0;
        if(!head || !head->next || k==0)    return head;     // edge cases
       
          while(curr){     // calculate length of  linked list
            len++;
            curr=curr->next;
           }
        
          curr=head;
          k=k%len;  //when k>n //calculating the number of actual rotations                             
        while(k){   
            // rotating the list by 'k' times
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