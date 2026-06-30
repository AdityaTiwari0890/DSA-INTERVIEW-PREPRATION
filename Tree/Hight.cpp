#include<bits/stdc++.h>
using namespace std;
int hight(Node *root){
    if(!root) return 0;

    int lh = hight(root->left);
    int rh = height(root->right);

    return 1+max(lh,rh);
}
int main(){}