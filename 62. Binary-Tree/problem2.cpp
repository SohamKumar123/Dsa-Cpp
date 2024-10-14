#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
       int data;
       Node* left;
       Node* right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* generateTree(Node* root){
    int data;
    cout<<"Enter your data : ";
    cin>>data;
    root = new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Insertion at left side :"<<data<<endl;
    root->left=generateTree(root->left);
    cout<<"Insertion at right side :"<<data<<endl;
    root->right=generateTree(root->right);
    return root;
}
void inorder(Node* root){
    // base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    // base case
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(Node* root){
    // base case
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}
void levelOrderTraversal(Node* root){
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    Node* root = NULL;
    // create a root
    root = generateTree(root);
    // levelOrderTraversal(root);
    cout<<"Inorder Traversal :"<<" ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal :"<<" ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal :"<<" ";
    postorder(root);
    return 0;
}