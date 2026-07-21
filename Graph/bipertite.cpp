#include<bits/stdc++.h>
using namespace std;
bool dfs(int it, int co, vector<int>&color, int V, vector<vector<int>>&adj){
    int s = adj[it].size();
    if(color[it]==-1){
        color[it] = co;
        for(int i = 0;i<s;i++){
            if(!dfs(adj[it][i],!co,color,V,adj)){
                return false;
            }
        }
    }else{
        if(color[it]!=co){
            return false;
        }
    }
    return true;
}
int bipertite(int V, vector<vector<int>>&lis){
    vector<int>color(V,-11);
    for(int i =0;i<V;i++){
        if(color[i]==-1){
            return dfs(i,0,color,V,adj);
        }
    }
}
int main(){}