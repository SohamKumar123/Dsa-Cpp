// WAP to 
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head , int d){
    // create a node
    Node* temp = new Node(d);
    temp->next = head;
    head->prev=temp;
    head = temp;
}
void insertAtTail(Node* &tail , int d){
    // create a node
    Node* temp = new Node(d);
    tail ->next = temp;
    temp->prev = tail;
    tail=temp;
}
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at start
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp=temp->next;
        count++;
    }
    // insert at last position
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    // creation a node for d;
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp->next;
    temp->next->prev= nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev=temp;
}
// delete the node at any position of doubly linked list
void deleteNode(int position, Node* &head){
    // deleting first or start node
    if(position==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int count =1;
        while(count < position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    Node* Node1= new Node(10);
    Node* head = Node1;
    Node* tail = Node1;
    print(head);
    insertAtHead(head,2);
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtPosition(tail,head,2,18);
    print(head);
    deleteNode(4,head);
    print(head);

    return 0;
}
