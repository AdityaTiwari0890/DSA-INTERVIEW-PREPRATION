#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& adj) {
        vector<vector<int>> lis(num);
        for(auto t:adj){
            lis[t[1]].push_back(t[0]);
        }
        vector<int>inDeg(num);
        for(int i =0;i<num;i++){
            for(int j = 0;j<lis[i].size();j++){
                inDeg[lis[i][j]]++;
            }
        }
        queue<int>q;
        for(int i = 0;i<num;i++){
            if(inDeg[i]==0){
                q.push(i);
            }
        }
        vector<int> arr;
        while(!q.empty()){
            int temp = q.front();
            arr.push_back(temp);
            q.pop();
            int s = lis[temp].size();
            for(int i =0;i<s;i++){
                inDeg[lis[temp][i]]--;
                if(inDeg[lis[temp][i]]==0) q.push(lis[temp][i]);
            }
        }
        if(arr.size()==num) return true;
        return false;
    }
};