// WAP to insert the data at tail and traverse the list


#include <iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      // constructor 
      Node (int data){
        this ->data = data;
        this ->next = NULL;
      }
};
void insertAtTail (Node* &tail , int d){
    // new node creation
    Node* temp = new Node(d);
    tail -> next =temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    // created a new node
    Node* node1 = new Node(10);
    // head pointed to node 1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    return 0;
}