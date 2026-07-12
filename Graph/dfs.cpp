#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  void triversal(int n, vector<int>&ans, vector<vector<int>>&adj, vector<int>&vis){
      int s = adj[n].size();
      vis[n] = 1;
      ans.push_back(n);
      for(int i =0;i<s;i++){
          if(!vis[adj[n][i]])
          triversal(adj[n][i],ans,adj,vis);
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int>ans;
        vector<int>vis(adj.size(),0);
        triversal(0,ans,adj,vis);
        return ans;
        
    }
};