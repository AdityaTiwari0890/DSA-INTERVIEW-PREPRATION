#include<bits/stdc++.h>
using namespace std;
void check(Node *root,bool flag){
    if(!root) return 0;
    return abs(1+check(root->left)-1+check(root->right))>1?false:true;
}
int isBalanced(Node* root){
    if(!root) return 0;
    int lh = isBalanced(root->left);
    if(lh==-1) return -1;
    int rh = isBalanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+max(lh,rh);
}

int main(){
    return isBalanced(root)==-1?false:true;
}