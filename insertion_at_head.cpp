#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *Next;
    
    Node (int data){
        this->data=data;
        this->Next=NULL;
        }
    };
    void insertAtstart(Node *&head,int d){
        Node* temp= new Node(d);
        temp->Next=head;
        head=temp;
     }
     void printlist(Node *&head){
         Node* temp= head;
         while(temp!=NULL){
             cout<<temp->data<<endl;
             temp=temp->Next;
         }
     }
    int main(){
        Node *node1= new Node(12);
        Node *head=node1;
        insertAtstart(head,14);
        printlist(head);

         
        return 0;
    }
