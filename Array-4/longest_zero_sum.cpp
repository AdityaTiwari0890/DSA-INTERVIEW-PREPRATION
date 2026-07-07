#include<bits/stdc++.h>
using namespace std;
int sub(vector<int>arr,int k){
    int n = arr.size();
    int sum = 0;
    unordered_map<int,int>mp;
    int l = 0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
        if(mp[sum-k]){
            l = max(l,i-mp[sum-k]);
        }
        mp[arr[i]] = i;
    }
    return l;
}
int main(){}