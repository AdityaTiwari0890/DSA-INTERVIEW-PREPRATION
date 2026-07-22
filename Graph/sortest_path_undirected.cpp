#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sortest(int V, vector<vector<int>>&adj, int src){
    vector<vector<int>>lis(V);
    for(auto a:adj){
        lis[a[0]].push_back(a[1]);
        lis[a[1]].push_back(a[0]);
    }
    queue<int>q;
    q.push(src);

    vector<int>dis(V,INT_MAX);
    dis[src] = 0;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        int l = lis[num].size();
        for(int i =0;i<l;i++){
            int neighbour = lis[num][i];
            if(dis[neighbour]>dis[num]+1){
                dis[neighbour] = dis[num]+1;
                q.push(neighbour);
            }
        }
    }
    return dis;
}
int main(){}