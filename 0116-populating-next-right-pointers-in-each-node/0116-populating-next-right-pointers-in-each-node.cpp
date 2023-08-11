/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
    

public:
    Node* connect(Node* root) {
        Node* curr=root;
        while(curr!=NULL && curr->left!=NULL){
            Node* node=curr;
            while(true){
                
                node->left->next=node->right;
                if(node->next==NULL) break;
                node->right->next=node->next->left;
                node=node->next;
            }
            curr=curr->left;
        }
        return root;
    }
};