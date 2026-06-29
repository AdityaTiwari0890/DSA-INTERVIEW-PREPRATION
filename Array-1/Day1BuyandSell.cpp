#include<bits/stdc++.h>
using namespace std;
// int stock(vector<int> arr){
//     int n = arr.size();
//     int largest = 0;
//     for(int i =0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             largest = max(largest, arr[j]-arr[i]);
//         }
//     }
//     return largest;
// }
int stock(vector<int>arr){
    int n = arr.size();
    int mini = INT_MAX;
    int profit = 0;
    for(int i =0;i<n;i++){
        if(arr[i]<mini){
            mini = arr[i];
        }else{
            profit = max(arr[i]-mini,profit);
        }
    }
    return profit;
}
int main(){
    vector<int> arr = {7,1,5,3,6,4};
    cout<<stock(arr);
}