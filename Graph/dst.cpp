#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<pair<int,int>>>l(V);
        for(auto t:edges){
            l[t[0]].push_back({t[1],t[2]});
            l[t[1]].push_back({t[0],t[2]});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
        q.push({0,src});
        vector<int>arr(V,INT_MAX);
        arr[src] = 0;
        while(!q.empty()){
            int dis = q.top().second;
            int w = q.top().first;
            q.pop();
            if(arr[dis]<w){
                continue;
            }
            for(int i =0;i<l[dis].size();i++){
                if(arr[dis]+l[dis][i].second <arr[l[dis][i].first]){
                    q.push({l[dis][i].second+w,l[dis][i].first});
                    arr[l[dis][i].first] = arr[dis]+l[dis][i].second;
                }
                
            }
        }
        return arr;
    }
};