#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr, int left, int mid, int right,vector<int>&temp,vector<pair<int,int>>&count){
    int i = left;
    int j = mid+1;
    // int count = 0;
    while(i<=mid&&j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
            int t = i;
            while(t<=mid){
                if(arr[t]>arr[j])
                count[t].second++;
                t++;
            }
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
void merge_sort(vector<int>& arr,int left,int right,vector<int>&temp,vector<pair<int,int>>&count){
    if(left>=right) return;
    int mid = left+(right-left)/2;
    merge_sort(arr,left,mid,temp,count);
    merge_sort(arr,mid+1,right,temp,count);
    merge(arr,left,mid,right,temp,count);
}
int main(){
    vector<int> arr = {5,2,6,1};
    vector<int> temp;
    vector<pair<int,int>>count;
    for(int x:arr){
        count.push_back({x,0});
    }
    merge_sort(arr,0,arr.size()-1,temp,count);
    vector<int>count1;
    for(auto p:count){
        count1.push_back(p.second);
    }
    for(int i =0;i<count1.size();i++){
        cout<<count1[i]<<" ";
    }

}