// WAP to insert the data at any position in linked list

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
void insertAtHead (Node* &head , int d){
    // new node creation
    Node* temp = new Node(d);
    temp -> next =head;
    head = temp;
}
void insertAtTail (Node* &tail , int d){
    // new node creation
    Node* temp = new Node(d);
    tail -> next =temp;
    tail = temp;
}
void insertAtPosition(Node* &tail, Node* &head , int position,int d){
    // insert at start
    if(position == 1){
        insertAtHead(head,d);
        return ;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp -> next;
        cnt++;
    }
    // insert at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return ;
    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
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
    insertAtTail(tail,18);
    print(head);
    insertAtTail(tail,20);
    print(head);
    insertAtPosition(tail,head,4,22);
    print(head);
    return 0;
}