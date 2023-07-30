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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==   NULL) return NULL;
        if(list1==NULL && list2!=   NULL) return list2;
        if(list1!=NULL && list2==   NULL) return list1;
        
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* ntemp;
        
        if(temp1->val<=temp2->val) {
            ntemp=temp1;
            temp1=temp1->next;
        }
        else{
            ntemp= temp2;
            temp2= temp2->next;
        } 
        ListNode* result= ntemp;
        while(temp1!=NULL && temp2!=NULL){
            
            
            if(temp1->val <=temp2->val){
               ntemp->next=temp1;
                temp1=temp1->next;
            }
            
            else {
                ntemp->next=temp2;
                temp2=temp2->next;
            }
            ntemp=ntemp->next;
        }
        
        while(temp1!=NULL){
            ntemp->next=temp1;
                temp1=temp1->next;
            ntemp = ntemp->next;
        }
        while(temp2!=NULL){
            ntemp->next=temp2;
                temp2=temp2->next;
            ntemp = ntemp->next;
        }
        
        return result;
        
    }
};