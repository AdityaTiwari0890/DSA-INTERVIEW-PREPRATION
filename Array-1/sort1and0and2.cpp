#include<bits/stdc++.h>
using namespace std;
void sor(vector<int>& arr){
    int n = arr.size()-1;
    int i =0;
    int j = 1;
    int k = n;
    while(j<=k&&k>=j){
        if(arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
        }else if(arr[j] == 2){
            swap(arr[j],arr[k]);
            k--;
        }else{
            j++;
        }
    }
}
int main(){
    vector<int>arr = {1,0,2,1,0};
    sor(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
}