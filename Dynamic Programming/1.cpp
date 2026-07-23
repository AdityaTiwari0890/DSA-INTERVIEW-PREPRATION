#include<bits/stdc++.h>
using namespace std;
int knapsack(int w, int i, vector<int>val, vector<int>wt, vector<vector<int>>&dp){
    if(w==0||i == wt.size()-1){
        return 0;
    }
    if(dp[w][i]!=-1) return dp[w][i];
    int pick = 0;
    if(w<=wt[i]){
        pick = knapsack(w-wt[i],i+1,val,wt,dp);
    }
    int not_pick = knapsack(w,i+1,val,wt,dp);
    dp[w][i] = max(pick,not_pick);
    return dp[w][i];
}
int main(){}