#include<bits/stdc++.h>
using namespace std;
void serialize(Node *root, string& st){
    if(!root){
        st+='N';
        return;
    }
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i =0;i<n;i++){
            Node *temp = q.front();
            q.pop();
            if(temp==nullptr) st+='N';
            st+=to_string(temp->val);
            
            q.push(temp->left);
            
            q.push(temp->right);
        }
    }
}
int main(){

}