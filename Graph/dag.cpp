#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool dfs(int it, vector<vector<int>>&lis,vector<int>&vis,vector<int>&visPath){
        vis[it] = 1;
        visPath[it] = 1;
        int s = lis[it].size();
        for(int i =0;i<s;i++){
            if(vis[lis[it][i]]==0){
                if(dfs(lis[it][i],lis,vis,visPath)) return true;
            }
            else if(visPath[lis[it][i]]==1){
                return true;
            }
        }
        visPath[it] = 0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<vector<int>>lis(V);
        for(auto a:edges){
            lis[a[0]].push_back(a[1]);
        }
        // code here
        vector<int>visPath(V,0);
        vector<int>vis(V,0);
        for(int i =0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,lis,vis,visPath)) return true;
            }
        }
        return false;
    }
};