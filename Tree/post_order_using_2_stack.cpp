#include<bits/stdc++.h>
using namespace std;
vector<int> post(Node *root){
    vector<int> arr;
    if(!root) return arr;
    stack<Node *>st1,st2;
    st1.push(root);
    while(!st1.empty()){
        Node *temp = st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left)
        st1.push(temp->left);
        if(temp->right)
        st1.push(temp->right);
    }
    while(!st2.empty()){
        arr.push_back(st2.top()->val);
        st2.pop();
    }
    return arr;
}
int main(){}