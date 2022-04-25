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
        ListNode *temp =head;int c=0;
        ListNode *pos=head;
        while(temp) 
        {
            c++;
            temp=temp->next;//counting total no. of nodes
        }
        int l=c-n;
        if(l==0){ //if it is first node.
            head = head->next;
            return head;
        }
       
        else   
       {    
        while(l-1>0) //l-1 steps jumped to reach n-1 position's node
        {
            pos=pos->next;
            l--;
        }
        ListNode* pos1=pos->next; 
        pos->next=pos1->next;
        pos1->next=NULL;
        }
        return head;
    }
    
};