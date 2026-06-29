#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr, int left, int mid, int right,vector<int>&temp,int &count){
    int i = left;
    int j = mid+1;
    // int count = 0;
    while(i<=mid&&j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            count += (mid-i)+1;
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=right){
        temp.push_back(arr[j++]);
    }
    for(int i =0;i<temp.size();i++){
        arr[left++] = temp[i];
    }
    temp.clear();
}
void merge_sort(vector<int>& arr,int left,int right,vector<int>&temp,int &count){
    if(left>=right) return;
    int mid = left+(right-left)/2;
    merge_sort(arr,left,mid,temp,count);
    merge_sort(arr,mid+1,right,temp,count);

    merge(arr,left,mid,right,temp,count);
}
int main(){
    vector<int> arr = {2,4,1,3,5};
    vector<int> temp;
    int count = 0;
    merge_sort(arr,0,arr.size()-1,temp,count);
    cout<<count;

}