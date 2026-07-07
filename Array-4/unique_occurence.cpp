#include<bits/stdc++.h>
using namespace std;
int unique(string s){
    unordered_map<char,int> mp;
    int r = 0;
    int l =0;
    int lx = 0;
    for(int i =0;i<s.size();i++){
        if(mp[s[i]]){
            if(l<=mp[s[i]])
            l = mp[s[i]]+1;
        }
        mp[s[i]] = i;
        r++;
        lx = max(l,r-l)
    }
    return lx;
}
int main(){}