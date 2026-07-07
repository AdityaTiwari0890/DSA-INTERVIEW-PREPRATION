#include<bits/stdc++.h>
using namespace std;
bool Search(vector<vector<int,int>>arr,int key){
    int l = 0;
    int r = arr.size()*arr[0].size();
    while(l<r){
        int mid = l+(r-l)/2;
        int row = mid%arr.size();
        int col = mid%arr[0].size();
        while(arr[row][col] == key){
            return true;
        }else if(arr[row][col]<key){
            l = mid+1;
        }else{
            r = mid;
        }
    }
    return false;
}
int main(){

}