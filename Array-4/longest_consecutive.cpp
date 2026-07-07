#include<bits/stdc++.h>
using namespace std;
int conse(vector<int> arr){
    unordered_map<int,int> mp;
    for(int i =0;i<arr.size();i++){
        mp[arr[i]] = i;
    }
    int l = 0;
    int lx = 0;
    for(int i = 0;i<arr.size();i++){
        if(mp.find(arr[i]-1)==mp.end()){
            l = 0;
            while(mp.find(arr[i]+1)!=mp.end()){
                l++;
                i = mp[arr[i]-1];
            }
            lx = max(lx,l);
        }
    }
    return lx;
}
int main(){}