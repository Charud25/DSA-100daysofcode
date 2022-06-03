/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
         ListNode *slow=head, *fast=head;
    if(head==NULL || head->next==NULL)
        return false;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow)
            return true;
    }
    return false;
    }
};

// bool hasCycle(ListNode *head) {
//         if(head == NULL)
//             return false;
        
//         unordered_map<ListNode*, int> m;
//         ListNode *temp = head;
        
//         while(temp){
//             if(m.find(temp) != m.end())
//                 return true;
//             else{
//                 m[temp]++;
//                 temp = temp->next;
//             }
//         }
        
//         return false;
// }