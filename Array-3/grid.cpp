#include<bits/stdc++.h>
using namespace std;
int grid(int n,int m){
    vector<vector<int>>dp(arr.size(),vector<int>(arr[0].size(),0));
    dp[0][0] = 1;
    for(int i =0;i<=n;i++){
        for(int j = 0;j<=m;j++){
            if(i>=0){
                dp[i][j] += dp[i-1][j];
            }
            if(j>=0){
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    return dp[n][m];
}
int main(){}