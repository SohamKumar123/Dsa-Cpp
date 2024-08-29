// WAP to delete first or start or middle node of the singly linked list

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

void deleteNode(int position , Node* &head){
    // deleting first or start node
    if(position==1){
        Node* temp= head;
        head=head->next;

        // memory free start node
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr=head;
        Node* prev = NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr= curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,18);
    insertAtTail(tail,20);
    print(head);
    deleteNode(5,head);
    print(head);
    return 0;
}