#include<bits/stdc++.h>
using namespace std;
bool check(Node *root1,Node *root2){
    if(!root&&!root2) return true;
    if(!root1||!root2) return false;
    bool l = check(root1->left,root2->left);
    bool r = check(root1->right,root2->right);
    return l&&r;
}
int main(){}