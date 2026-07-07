#include<bits/stdc++.h>
using namespace std;
int ans = 0;
Node *ceil(Node *root, int key){
    if(!root) return nullptr;
    while(!root){
        if(key == root->val){
            return ans;
        }
        else if(root->val<key){
            ans = root->val;
            root = root->right;
        }else{
            root = root->left;
        }
    }
    return ans;
}
int main(){}