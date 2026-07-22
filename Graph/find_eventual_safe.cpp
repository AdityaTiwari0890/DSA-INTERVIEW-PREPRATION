#include<bits/stdc++.h.
using namespace std;
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<vector<int>>lis(V);
        
        vector<int>arr(V);
        for(int i =0;i<V;i++){
            for(int a:adj[i]){
                lis[a].push_back(i);
            }
            arr[i] = adj[i].size();
        }
    queue<int>q;
    for(int i =0;i<V;i++){
        if(arr[i]==0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        ans.push_back(num);
        int s = lis[num].size();
        for(int i =0;i<s;i++){
            arr[lis[num][i]]--;
            if(arr[lis[num][i]]==0){
                q.push(lis[num][i]);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};
int main(){}