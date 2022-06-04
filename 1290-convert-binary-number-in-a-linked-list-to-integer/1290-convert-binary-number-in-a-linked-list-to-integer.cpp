#include<math.h>
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
    int getDecimalValue(ListNode* head) {
    
        ListNode* temp= head;
        int c=0;
        while(head!=NULL)
        {
           c++ ;
           head=head->next;
        }
        int sum=0;
        for(int i=c-1;i>=0;i--)
        {
            temp->val*=pow(2,i);
            sum+=temp->val;
            temp=temp->next;
        }
     return sum;   
    }
};