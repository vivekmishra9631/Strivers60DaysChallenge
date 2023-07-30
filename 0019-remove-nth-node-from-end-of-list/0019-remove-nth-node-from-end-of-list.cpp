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
        int cnt=0;
        ListNode* curr=head;
        while(curr!=NULL){
            cnt++;
            curr=curr->next;
            }
        int a=cnt-n;
        
        ListNode* curr1=head;
        ListNode* temp=NULL;
        
        if(a==0){
            temp=curr1->next;
            head=temp;
            delete curr1;
            return head;
        }
        
        while(a!=0){
            temp=curr1;
            curr1=curr1->next;
            a--;
        }
        temp->next=curr1->next;
        delete curr1;
        return head;
    }
};