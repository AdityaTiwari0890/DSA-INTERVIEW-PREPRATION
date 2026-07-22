#include<bits/stdc++.h>
using namespace std;
void dfs(int n, stack<char>&st,vector<vector<int>>&lis,vector<int>&present,vector<int>&vis){
    vis[n] = 1;
    int l = lis[n].size();
    for(int i =0;i<l;i++){
        if(present[lis[n][i]]&&vis[lis[n][i]]==0)
        dfs(lis[n][i],st,lis,present,vis);
    }
    st.push(n+'a');
}
string alen(vector<string>&words){
    int V = 26;
    vector<vector<int>>lis(V);
    stack<char>st;
    vector<int>present(V,0);
    for(auto a:words){
        for(auto w:a){
            present[w-'a'] = 1;
        }
    }
    for(int i =0;i<words.size()-1;i++){
        string s1 = words[i];
        string s2 = words[i+1];
        int l = min(s1.size(),s2.size());
        for(int j = 0;j<l;j++){
            if(s1[j]!=s2[j]){
                lis[s1[j]-'a'].push_back(s2[j]-'a');
                break;
            }
        }
    }
    vector<int>vis(V,0);
    for(int i =0;i<V;i++){
        if(present[i]&&vis[i]==0)
        dfs(i,st,lis,present,vis);
    }
    string ans;
    while(!st.empty()){
        char num = st.top();
        st.pop();
        ans+=num;
    }
    return ans;
}

int main(){}