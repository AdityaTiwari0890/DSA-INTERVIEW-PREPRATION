#include<bits/stdc++.h>
using namespace std;
void dfs(int node , vector<int>&vis,vector<vector<int>>&adj,stack<int>&st){
    vis[node] = 1;
    int s = adj[node].size();
    for(int i =0;i<s;i++){
        if(!vis[adj[node][i]]){
            dfs(adj[node][i],vis,adj,st);
        }
    }
    st.push(adj[node][i]);
}
vector<int> topo(int V, vector<vector<int>>&adj){
    vector<int>vis(V,0);
    stack<int>st;
    for(int i =0;i<V;i++){
        if(vis[i]==0){
            dfs(i,vis,adj,st);
        }
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main(){}