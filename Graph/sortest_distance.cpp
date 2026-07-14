#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        // Code here
        vector<vector<pair<int,int>>>l(V);
        for(auto t:edges){
            l[t[0]].push_back({t[1],t[2]});
            l[t[1]].push_back({t[0],t[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,src});
        vector<int>arr(V,INT_MAX);
        arr[src] = 0;
        vector<int>p(V,-1);
        while(!q.empty()){
            int dis =  q.top().second;
            int w = q.top().first;
            q.pop();
            if(w>arr[dis]) continue;
            if(dis == dest) break;
            for(int i =0;i<l[dis].size();i++){
                for(auto &it : l[dis]){
                    int adj = it.first;
                    int wt = it.second;
                
                    if(arr[dis] + wt < arr[adj]){
                        arr[adj] = arr[dis] + wt;
                        p[adj] = dis;
                        q.push({arr[adj], adj});
                    }
                }
            }
        }
        if(arr[dest]==INT_MAX) return {};
        vector<int> ans;
        int current = dest;
        while(true){
            ans.push_back(current);
            if(current == src) break;
            current = p[current];
            if(current == -1) return {};
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
