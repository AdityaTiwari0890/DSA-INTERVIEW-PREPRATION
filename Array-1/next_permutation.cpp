#include<bits/stdc++.h>
using namespace std;
// vector<int> next(vector<int> arr){
//     return next_permutation(arr.begin(),arr.end());
// }
vector<int> next(vector<int> arr){
    int index = -1;
    for(int i =arr.size()-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }
    if( index == -1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    else{
        for(int i =arr.size()-1;i>index;i++){
            if(arr[index]<arr[i]){
                swap(arr[i],arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1,arr.end());
        return arr;
    }
}
