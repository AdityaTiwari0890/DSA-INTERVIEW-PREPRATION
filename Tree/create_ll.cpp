#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};
Node* create(){
    int a;
    cin>>a;
    if(a==-1){
        return nullptr;
    }
    queue<Node *>q;
    Node *root = new Node(a);
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        cin>>a;
        if(a!=-1){
            temp->left = new Node(a);
            q.push(temp->left);
        }
        cin>>a;
        if(a!=-1){
            temp->right = new Node(a);
            q.push(temp->right);
        }
    }
    return root;
}
void level_triversal(Node *root){
    if(!root) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->val;
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
void post_order(Node *root){
    if(!root) return;
    post_order(root->left);
    post_order(root->right);
    cout<<root->val;
}
void pre_order(Node *root){
    if(!root) return;
    cout<<root->val;
    post_order(root->left);
    post_order(root->right);
}
void inorder(Node *root){
    if(root == nullptr) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main(){
    Node *root = create();
    level_triversal(root);
}