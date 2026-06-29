#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        left = right = nullptr;
    }
};
vector<int> post(Node *root){
    vector<int> arr;
    if(!root) return arr;
    stack<Node*> st;
    st.push(root);
    Node* curr = st.top();
    while(!st.empty() || curr){
        if(curr){
            st.push(curr);
            curr = curr->left;
        }else{
            Node *temp = st.top()->right;
            if(!temp){
                temp = st.top();
                st.pop();
                arr.push_back(temp->val);
                while(!st.empty()&&temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    arr.push_back(temp->val);
                }
            }
            else{
                curr = temp;
            }
        }
    }
    return arr;
}
Node* create(){
    int a;
    cin>>a;
    if(a==-1){
        return nullptr;
    }
    queue<Node *>q;
    Node *root = new Node(a);
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        cin>>a;
        if(a!=-1){
            temp->left = new Node(a);
            q.push(temp->left);
        }
        cin>>a;
        if(a!=-1){
            temp->right = new Node(a);
            q.push(temp->right);
        }
    }
    return root;
}
int main(){
    Node *root = create();
    vector<int> arr = post(root);
    for(int i =0;i<arr.size();i++){
    cout<<arr[i]<<" ";}
    return 0;
}