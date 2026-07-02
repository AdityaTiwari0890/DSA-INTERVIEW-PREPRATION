#include<bits/stdc++.h>
using namespace std;
class Node{
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};
vector<int> pre(Node *root){
    vector<int>arr;
    if(!root) return arr;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node *temp = st.top();
        st.pop();
        arr.push_back(temp->val);
        if(temp->right) st.push_back(temmp->right);
        if(temp->left) st.push_back(temmp->left);
    }
    return arr;
}
int main(){

}