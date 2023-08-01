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
        unordered_map<Node*,Node*>mpp;
        unordered_map<Node*,Node*>mpp1;
        while(temp!=NULL){
           Node* newNode = new Node(temp->val);
            mpp[temp] = newNode;
            mpp1[temp] = temp->random;
            temp = temp->next;
        }
        
       temp = head;
        while (temp != NULL) {
            Node* newNode = mpp[temp];
            newNode->next = mpp[temp->next];
            newNode->random = mpp[temp->random];
            temp = temp->next;
            newNode=newNode->next;
        }
        return mpp[head];
    }
};