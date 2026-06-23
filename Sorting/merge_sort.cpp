
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr, int left, int mid, int right,vector<int>&temp){
    int st = left;
    int ft = mid+1;
    while(st<=mid&&ft<=right){
        if(arr[st]<=arr[ft]){
            temp.push_back(arr[st++]);
        }else{
            temp.push_back(arr[ft++]);
        }
    }
    while(st<=mid){
        temp.push_back(arr[st++]);
    }
    while(ft<=right){
        temp.push_back(arr[ft++]);
    }
    for(int i = 0;i<temp.size();i++){
        arr[left++] = temp[i];
    }
    temp.clear();
}
void merge_sort(vector<int>&arr,int left, int right,vector<int>&temp){
    if(left>=right) return;
    int mid = left+(right-left)/2;
    merge_sort(arr,left,mid,temp);
    merge_sort(arr,mid+1,right,temp);

    merge(arr,left,mid,right,temp);
}
int main(){
    vector<int>arr = {1,2,5,2,1,4};
    vector<int>temp;
    merge_sort(arr,0,arr.size()-1,temp);
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}