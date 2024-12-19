#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* Next;

    Node(int data) {
        this->data = data;
        this->Next = NULL;
    }
};

void insertAtEnd(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->Next = temp;
    tail = temp; 
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->Next;
    }
}

int main() {
    Node* node1 = new Node(12);
    Node* tail = node1;

    insertAtEnd(tail, 18); 
    printList(node1);
    return 0;
}
