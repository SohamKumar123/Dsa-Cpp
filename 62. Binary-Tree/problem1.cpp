// creation of binary tree
#include <iostream>
#include <queue>
using namespace std;

class node{
        public:
           int data;
           node* left;
           node* right;
        node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};
node* buildTree(node* root){
    int data;
    cout<<"Enter your data :"<<endl;
    cin>>data;
    root = new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter a data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter a data for inserting in right of "<<data<<endl;
    root->left = buildTree(root->right);
    return root;
}
void inorder(node* root){
    // base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" "<<endl;
    inorder(root->right);
}
void levelOrderTraversal (node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            // purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                // queue still has some child
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
    node* root = NULL;
    // create a root
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // cout<<"Printing the level order data :"<<endl;
    // levelOrderTraversal(root);
    inorder(root);
    return 0;
}