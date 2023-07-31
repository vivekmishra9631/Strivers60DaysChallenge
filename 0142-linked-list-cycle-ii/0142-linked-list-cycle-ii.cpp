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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* f=head;
        ListNode* s=head;
        
         while(f!=NULL && f->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s){
                s=head;
                while(f!=s){
                    f=f->next;
                    s=s->next;
                    
                }
                return s;
            }
        }
       return NULL; 
    }
};