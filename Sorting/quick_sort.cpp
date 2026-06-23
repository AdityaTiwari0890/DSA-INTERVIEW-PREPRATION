#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int left, int right){
    int pivot = arr[left];
    int i =left+1;
    int j = right;
    while(i<j){
        while(i<j&&arr[i]<=pivot) i++;
        while(i<j&&arr[j]>pivot) j--;
        swap(arr[i++],arr[j--]);
    }
    i = left+1;
    while(i<=right&&arr[i]<=pivot){
        swap(arr[left++],arr[i++]);
    }
    return left;
}
void quick(vector<int>&arr,int left, int right){
    if(left>=right) return;
    // int pivot = arr[left];
    int pt = partition(arr,left,right);
    quick(arr,left,pt-1);
    quick(arr,pt+1,right);
}
int main(){
    vector<int>arr = {1,2,34,1,2,3,4,52,2,2,2,2};
    quick(arr,0,arr.size()-1);
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}