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
    ListNode* reverse(ListNode* head){
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        ListNode* rest_head= reverse(head->next);
        ListNode* rest_tail=head->next;
        rest_tail->next=head;
        head->next=NULL;
        return rest_head;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        
        ListNode* f=head;
        ListNode* s=head;
        while(f->next!=NULL && f->next->next!=NULL){
            f=f->next->next;
            s=s->next;
        }
        s->next=reverse(s->next);
        s=s->next;
        
        while(s!=NULL){
            if(s->val!=head->val){
                return false;
            }
            head=head->next;
           s=s->next;
        }
        return true;
    }
};