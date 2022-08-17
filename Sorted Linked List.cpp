#include <bits/stdc++.h>
using namespace std;
int main() {

    return 0;
}
//////////////////////////////////////////////////////////////////
Node* remove_repeats(Node* head){
    Node* temp=head; 
    Node* h= head;
    while(temp->next !=NULL){
        Node*prev= temp;   //Actual node
        int d= temp->data;
        temp=temp->next;
        // if(temp->next ==NULL){
        //     return head;
        // }
     1-> 2-> 3 -> 3-> 3-> 3-> NULL

     1-> 2-> 3 -> NULL


        while( temp->next->data != d){
            temp= temp->next;
             if(temp->next == NULL){
                 prev->next = NULL;
                 return head;
             }
             
        }
        
        prev->next = temp;
        head=h;
        return head;
    }
}