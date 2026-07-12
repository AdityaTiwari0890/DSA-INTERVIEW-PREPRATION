#include<bits/stdc++.h.
using namespace std;
int rotten(vector<vector<int>>&grid){
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<pair<int,int>,int>>q;
    vector<vector<int>>vis(m,vector<int>(n,0));
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(grid[i][j] == 2){
                q.push({{i,j},0});
                vis[i][j] = 1;
            }
        }
    }
    int time = 0;
    while(!q.empty()){
        int i = q.front().first.first;
        int j = q.front().first.second;
        int t = q.front().second;
        q.pop();
        time = max(time,t);
        if(i+1<m&&grid[i+1][j]==1&&vis[i+1][j]!=1){
            q.push({{i+1,j},t+1});
            vis[i+1][j] = 1;
        }
        if(i-1>=0&&grid[i-1][j]==1&&vis[i-1][j]!=1){
            q.push({{i-1,j},t+1});
            vis[i-1][j] = 1;
        }
        if(j+1<n&&grid[i][j+1]==1&&vis[i][j+1]!=1){
            q.push({{i,j+1},t+1});
            vis[i][j+1] = 1;
        }
        if(j-1>=0&&grid[i][j-1]==1&&vis[i][j-1]!=1){
            q.push({{i,j-1},t+1});
            vis[i][j-1] = 1;
        }
    }
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            if(grid[i][j]==1&&vis[i][j]!=1)
            return -1;
        }
    }
    return time;
}
int main(){}