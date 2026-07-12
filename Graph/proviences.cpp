#include<bits/stdc++.h>
using namespace std;
void dfs(int n, vector<int>&vis, vector<vector<int>>&adj){
    vis[n] = 1;
    int s = adj[n].size();
    for(int i =0;i<s;i++){
        if(!vis[adj[n][i]]){
            dfs(adj[n][i],vis,adj);
        }
    }
}
int proviences(vector<vector<int>>&adj){
    vector<int> vis(adj.size(),0);
    int count = 0;

    int n = adj.size();
    vector<int> adjL[n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(adj[i][j] == 1&&i!=j){
                adjL[i].push_back(j);
            }
        }
    }
    for(int i =0;i<n;i++){
        if(!vis[i]){
            count++;
            dfs(i,vis,adj);
        }
    }
    return count;
}
int main(){}