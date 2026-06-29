#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        next = nullptr;
    }
};
Node *cre(){
    int a;
    cin>>a;
    if(a==-1) return nullprtr;
    Node *temp = new Node(a);
    temp->next = cre(temp);
    return temp;
}
void triversal(Node *root){
    Node *alpha = root;
    while(alpha){
        cout<<alpha->val<<" ";
        alpha = alpha->next;
    }
}
Node *reverse(Node *root){
    if(root||root->next)
    return nullptr;

    Node *curr = root;
    Node *prev = nullptr;
    Node *fut = nullptr;

    while(curr){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    return prev;
}
Node *mid(Node *root){
    Node *slow = root;
    Node *fast = root;
    while(fast&&fast->next){
        fast = fast->next->next;
        s
    }
}
bool sum(vector<int> arr, int n){
    int i = 0;
    int j = 1;
    int k = arr.size()-1;

    for(i =0;i<arr.size();i++){
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum == n) return 1;
            else if(arr[i]+arr[j]+arr[k] >n){
                k--;
            }else{
                j++;
            }
        }
    }
}
// int interval(vector<int> arr, vector<int> arr2){
//     sort(arr)
// }


Node *cre(vector<int> arr){
    if(arr.empty() || arr[0] == -1) return nullptr;
    Node curr = new Node(arr[0]);
    queue<Node*>q;
    q.push_back(curr);

    int i =1;
    while(!q.empty()){
        Node *curr = q.front();
        q.pop();

        if(i<arr.size()&&arr[i]!=-1){
            curr->left = new Node (arr[i]);
            q.push(curr->left);
        }
        i++;
        if(i<arr.size()&&arr[i]!=-1){
            curr->right = new Node (arr[i]);
            q.push(curr->right);
        }
        i++;
    }
}
Node *cre(){
    int data;
    cin>>data;

    if(data == -1) return nullptr;

    Node *root = new Node(data);
    root->left = cre();
    root->right = cre();
    return root;
}
int main(){
    int a;
    cin>>a;
    Node *root = new Node(a);
    root->next = cre(root);

    return 0;
}