#include<bits/stdc++.h>
using namespace std;
void(vector<int> arr, int&n , int left, int mid,int right){
    int l = 0;
    int r = mid+1;
    while()
}
void merge_sort(vector<int> arr, int& n, int left, int right){
    if(left>right) return;
    int mid = left+(right-left)/2;

    merge_sort(arr,n,left,mid);
    merge_sort(arr,n,mid+1,right);

    merge(arr,n,left,mid,right);
}
void count(vector<int>arr,int& n){

}
int main(){}