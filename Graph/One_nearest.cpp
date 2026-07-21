#include<bits/stdc++.h>
using namespace std;
void nearest(vector<vector<int>>&adj, vector<vector<int>>&near){
    queue<pair<pair<int,int>,int>>q;
    int n = adj.size();
    int m = adj[0].size();
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(adj[i][j] == 1){
                q.push({{i,j},0});
                near[i][j] = 0;
            }
        }
    }
    while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int w = q.front().second;
        q.pop();
        if(row>=0&&row<n&&col>=0&&col<m&&adj[row+1][col]==0){
            if(near[row+1][col]>w+1){
                q.push({{row+1,col},w+1});
                near[row+1][col] = w+1;
            }
        }
        if(row>=0&&row<n&&col>=0&&col<m&&adj[row-1][col]==0){
            if(near[row-1][col]>w+1){
                q.push({{row-1,col},w+1});
                near[row-1][col] = w+1;
            }
        }
        if(row>=0&&row<n&&col>=0&&col<m&&adj[row][col+1]==0){
            if(near[row][col+1]>w+1){
                q.push({{row,col+1},w+1});
                near[row][col+1] = w+1;
            }
        }
        if(row>=0&&row<n&&col>=0&&col<m&&adj[row][col-1]==0){
            if(near[row][col-1]>w+1){
                q.push({{row,col-1},w+1});
                near[row][col-1] = w+1;
            }
        }
    }
}
int main(){}