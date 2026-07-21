#include<bits/stdc++.h.
using namespace std;
void zeros(vector<vector<char>>&board, vector<vector<int>>&arr){
    int n = board.size();
    int m = board[0].size();
    queue<pair<int,int>>q;
    for(int i =0;i<n;i++){
        if(board[i][0] == 'O'){
            q.push({i,0});
        }
        if(board[0][i] == 'O'){
            q.push({0,i});
        }
        if(board[n-1][i] == 'O'){
            q.push({n-1,i});
        }
        if(board[i][m-1] == 'O'){
            q.push({i,m-1});
        }
    }
    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        if(arr[row][col] == 1) continue;
        arr[row][col] = 1;
        if(row+1<n&&board[row+1][col]=='O'){
            q.push({row+1,col});
        }
        if(row>=0&&board[row-1][col]=='O'){
            q.push({row-1,col});
        }
        if(col<m&&board[row][col+1]=='O'){
            q.push({row,col+1});
        }
        if(col>=0&&board[row][col-1]=='O'){
            q.push({row,col-1});
        }
    }
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(board[i][j]=='O' && arr[i][j]==0){
                board[i][j]='X';
            }
        }
    }
}
int main(){}