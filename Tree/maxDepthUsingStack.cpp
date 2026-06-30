#include<bits/stdc++.h>
using namespace std;
int maxDepth(Node *root){
    if(!root) return 0;
    queue<Node *>q;
    q.push(root);
    int level = 0;
    while(!q.empty()){
        Node *temp = q.front();
        int n = q.size();
        level++;
        q.pop();
        for(int i =0;i<n;i++){
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
    return level;
}
int main(){}