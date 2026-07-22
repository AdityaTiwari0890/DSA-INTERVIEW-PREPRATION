#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findCheapestPrice(int V, vector<vector<int>>& flights, int src, int dest, int k) {
        vector<vector<pair<int,int>>>lis(V);
        for(auto a: flights){
            lis[a[0]].push_back({a[1],a[2]});
        }
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        q.push({0,{src,0}});
        vector<vector<int>>dist(V,vector<int>(k+2,INT_MAX));
        dist[src][0] = 0;
        while(!q.empty()){
            int w = q.top().first;
            int d = q.top().second.first;
            int t = q.top().second.second;
            q.pop();
            if(d==dest) return w;
            if(t==k+1){
                continue;
            }
            int l = lis[d].size();
            for(int i =0;i<l;i++){
                int neighbour = lis[d][i].first;
                int weight = lis[d][i].second;
                
                if(weight+w<dist[neighbour][t+1]){
                    dist[neighbour][t+1] = weight+w;
                    q.push({weight+w,{neighbour,t+1}});
                }
                }
            }
        return -1;
    }
};
int main(){}