#include<bits/stdc++.h>
using namespace std;
vector<long long> pascals(int n){
    vector<long long> arr;
    int val = 1;
    arr.push_back(val);
    for(int i =1;i<n;i++){
        val *= (N-i)/i;
        arr.push_back(val);
    }
    return arr;
}
int main(){
    int n = 4;
    vector<vector<int>> arr;
    for(int i =1;i<=n;i++){
        arr.push_back(pascals(i));
    }
    return 0;
}