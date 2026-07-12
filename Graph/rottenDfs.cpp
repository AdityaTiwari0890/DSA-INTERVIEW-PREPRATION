#include<bits/stdc++.h>
using namespace std;
void dfs(int i ,int j, int t,int m,int n, vector<vector<int>>&vis,vector<vector<int>>&grid){
    if(i<0||i>=m||j<0||j>=n||grid[i][j]==0||vis[i][j]<=t) return;
    vis[i][j] = t;
    dfs(i+1,j,t+1,m,n,vis,grid);
    dfs(i-1,j,t+1,m,n,vis,grid);
    dfs(i,j+1,t+1,m,n,vis,grid);
    dfs(i,j-1,t+1,m,n,vis,grid);
}
int rotten(vector<vector<int>>&grid){
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>>vis(m,vector<int>(n,0));
    queue<pair<int,int>>q;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(grid[i][j]==2){
                q.push({i,j});
            }
        }
    }
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        int t = vis[i][j];
        q.pop();
        dfs(i,j,t,m,n,vis,grid);
    }
    int time = 0;
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(grid[i][j]==1){
                if(vis[i][j]==0) return -1;
                time = max(time,vis[i][j]);
            }
        }
    }
    return time;
}
int main(){}

// class Solution {
// public:
// void dfs(int i ,int j, int t,int m,int n, vector<vector<int>>&vis,vector<vector<int>>&grid){
//     if(i<0||i>=m||j<0||j>=n||grid[i][j]==0||vis[i][j]<t) return;
//     vis[i][j] = t;
//     dfs(i+1,j,t+1,m,n,vis,grid);
//     dfs(i-1,j,t+1,m,n,vis,grid);
//     dfs(i,j+1,t+1,m,n,vis,grid);
//     dfs(i,j-1,t+1,m,n,vis,grid);
// }
//     int orangesRotting(vector<vector<int>>& grid) {
//         int m = grid.size();
//     int n = grid[0].size();
//     vector<vector<int>>vis(m,vector<int>(n,INT_MAX));
//     queue<pair<int,int>>q;
//     for(int i =0;i<m;i++){
//         for(int j =0;j<n;j++){
//             if(grid[i][j]==2){
//                 vis[i][j] = 0;
//                 q.push({i,j});
//             }
//         }
//     }
//     while(!q.empty()){
//         int i = q.front().first;
//         int j = q.front().second;
//         q.pop();
//         dfs(i,j,0,m,n,vis,grid);
//     }
//     int time = 0;
//     for(int i =0;i<m;i++){
//         for(int j =0;j<n;j++){
//             if(grid[i][j]==1){
//                 if(vis[i][j]==INT_MAX) return -1;
//                 time = max(time,vis[i][j]);
//             }
//         }
//     }
//     return time;
//     }
// };