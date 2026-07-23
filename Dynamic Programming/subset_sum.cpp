#include<bits/stdc++.h>
using namespace std;
int sum(int n, int target, vector<int>&arr, vector<vector<int>>&dp){
    if(target == 0){
        return true;
    }
    if(n==0){
        return target-arr[n] == 0;
    }
    if(target<0){
        return false;
    }
    if(dp[n][target] != -1){
        return dp[n][target];
    }
    int pick = 0;
    if(target<=arr[i]){
        pick = sum(n-1,target-arr[i],arr,dp);
    }
    int not_pick = sum(n-1,target,arr,dp);
    dp[n][target] = pick||not_pick;
    return dp[n][target];
}
int main(){}