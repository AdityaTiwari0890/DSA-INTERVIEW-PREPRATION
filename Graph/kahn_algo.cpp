#include<bits/stdc++.h>
using namespace std;
vector<int> topo(int V, vector<vector<int>>&adj){
    vector<vector<int>>lis(V);
    vector<int> arr(V);
    for(auto a:adj){
        lis[a[0]].push_back(a[1]);
        arr[a[1]]++;
    }
    queue<int>q;
    for(int i =0;i<V;i++){
        if(arr[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int num = q.front();
        q.pop();
        ans.push_back(num);
        int s = lis[num].size();
        for(int i =0;i<s;i++){
            arr[lis[num][i]]--;
            if(arr[lis[num][i]]==0)
            q.push(lis[num][i]);
        }
    }
    return ans.size()==V?ans:{};
}
int main(){}