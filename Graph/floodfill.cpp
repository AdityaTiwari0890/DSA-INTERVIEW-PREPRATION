#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(int i, int j, int c, int co, int m, int n, vector<vector<int>>&img){
        if(i<0||i>=m||j<0||j>=n||img[i][j]!=co) return;
        img[i][j] = c;
        dfs(i+1,j,c,co,m,n,img);
        dfs(i-1,j,c,co,m,n,img);
        dfs(i,j+1,c,co,m,n,img);
        dfs(i,j-1,c,co,m,n,img);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        if(color == image[sr][sc]) return image;
        dfs(sr,sc,color,image[sr][sc],m,n,image);
        return image;
    }
};