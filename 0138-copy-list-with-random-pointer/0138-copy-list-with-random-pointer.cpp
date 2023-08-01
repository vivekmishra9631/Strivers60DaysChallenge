/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) {
            return nullptr;
        }
        Node* temp=head;
        Node* front=head;
        
        while(temp!=NULL){
           front=temp->next;
            Node* copy= new Node(temp->val);
            temp->next=copy;
            copy->next=front;
            temp=front;
        }
        
       temp = head;
        while (temp != NULL) {
            if(temp->random!=NULL) temp->next->random=temp->random->next;
            temp=temp->next->next;
        }
       temp = head;
        Node* dummy=new Node(0);
        Node* copy=dummy;
        while(temp!=NULL){
            copy->next =temp->next;
            copy=copy->next;
            temp->next=copy->next;
            temp=temp->next;
        }
        return dummy->next;
    }
};