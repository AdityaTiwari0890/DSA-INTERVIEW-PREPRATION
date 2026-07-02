#include<bits/stdc++.h>
using namespace std;
int daimeter(Node *root, int &dai){
    if(!root) return 0;
    int lh = daimeter(root->left);
    int rh = daimeter(root->right);
    daimeter = max(daimeter,lh+rh);
    return 1+max(rh,lh);
}
int main(){}