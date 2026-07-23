#include<bits/stdc++.h>
using namespace std;

int coin(int n, vector<int>arr,vector<vector<int>>dp){
    if(n==0){
        return 1;
    }
    if(i==0){
        return arr[i]==n;
    }
    if(n<0){
        return 0;
    }
    if(dp[n][i]!=-1){
        reurn dp[n];
    }
    if(n>arr[i])
    int a = coin(n-arr[i],i,arr,dp);
    int b = coin(n,i-1,arr,dp);
    
    dp[n][i] = a+b;
    return dp[n][i];
}
int main(){

}