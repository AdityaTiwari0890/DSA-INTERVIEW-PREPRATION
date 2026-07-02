#include<bits/stdc++.h>
using namespace std;
void deserializeation(int i,string& str){
    if(str[i]=='N'){
        return nullptr;
    }
    Node *root = new Node(str[i]);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i =0;i<n;i++){
            Node *temp = q.front();
            q.pop();
            if(str[i] == 'N'){
                i++;
                temp->left = nullptr;
            }else{
                temp->left = new Node(stoi(str[i++]));
                q.push(temp->left);
            }

            if(str[i] == 'N'){
                i++;
                temp->right = nullptr;
            }else{
                temp->right = new Node(stoi(str[i]),);
                q.push(str[i++]);
            }
        }
    }
}
int main(){}