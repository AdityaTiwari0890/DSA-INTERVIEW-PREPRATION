#include<bits/stdc++.h>
using namespace std;
int flood_fill(vector<int>&adj, int sr,int sc, int color){
    int colour = adj[sr][sc];
    queue<pair<int,int>>q;
    q.push({sr,sc});
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        if(adj[row+1][col] == colour){
            adj[row+1][col] = color;
            q.push({row+1,col});
        }
        if(adj[row-1][col] == colour){
            adj[row-1][col] = color;
            q.push({row-1,col});
        }
        if(adj[row][col+1] == colour){
            adj[row][col+1] = color;
            q.push({row,col+1});
        }
        if(adj[row][col-1] == colour){
            adj[row][col-1] = color;
            q.push({row,col-1});
        }
    }
    adj[sr][sc] = color;
}
int main(){}