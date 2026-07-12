#include,bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void triversal(int n, vector<vector<int>>&adj, vector<int>&ans,vector<int> &vis){
        queue<int>q;
        q.push(n);
        vis[n] = 1;
        while(!q.empty()){
            int a = q.front();
            int s = adj[a].size();
            q.pop();
            ans.push_back(a);
            for(int i =0;i<s;i++){
                if(!vis[adj[a][i]]){
                    q.push(adj[a][i]);
                    vis[adj[a][i]] = 1;
                }
            }
        }
    }
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector<int>vis(adj.size(),0);
        vector<int> ans;
        triversal(0,adj,ans,vis);
        return ans;
    }
};
int main(){}