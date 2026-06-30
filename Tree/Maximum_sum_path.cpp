#include<bits/stdc++.h>
using namespace std;
int l(TreeNode *root){
    if(!root) return 0;
    int lh = l(root->left,path);
    int rh = l(root->right,path);
    path = max(path,max(lh+rh,max(lh,rh)))+root->val;
    return path;
}
int main(){}