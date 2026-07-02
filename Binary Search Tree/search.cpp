#include<bits/stdc++.h>
using namespace std;
bool searc(Node *root,int key){
    if(!root) return false;
    if(key == root->val) return true;
    else if(key<root->val) searc(root->left,key);
    else search(root->right,key);
    return false;
}
int main(){}