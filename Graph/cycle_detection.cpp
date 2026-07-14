#include<bits/stdc++.h>
using namespace std;
bool dfs(int num, int n, vector<int>&vis, vector<vector<int>>&adj){
    if(num>=n) return false;
    for(int i =0;i<n;i++){
        if(vis[i] = 1) return true;
        return dfs(i,n,vis,adj);
    }
}
bool detect(vector<vector<int>>&adj){
    int n = adj.size();
    int m = adj.size();
    vector<bool> vis(adj.size());
    return dfs(0,n,vis,adj);
}
int main(){}