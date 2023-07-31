#include<bits/stdc++.h>
using namespace std;
Node* mergeSort(Node* a, Node* b){
    Node* temp= new Node(0);
    Node* res=temp;
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a; 
            temp = temp->bottom; 
            a = a->bottom; 
        }
        else {
            temp->bottom = b;
            temp = temp->bottom; 
            b = b->bottom; 
        }
    }
    
    while(a!=NULL) {
        temp->bottom = a;
        a=a->bottom;
        temp=temp->bottom;
    } 
    while(b!=NULL){
        temp->bottom = b;
        b=b->bottom;
        temp=temp->bottom;
    } 
    
    return res -> bottom; 
}
public: Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL){
       return root;
   }
   
   root->next= flatten(root->next);
   mergeSort(root,root->next);
   return root;
}


int main(){
    
return 0;
}