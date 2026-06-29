#include<bits/stdc++.h>
using namespace std;
// vector<int> merge(vector<int> arr1,vector<int> arr2,int n,int m){
//     arr1.resize(m+n);
//     int i = n-1;
//     int j = m-1;
//     int k = n+m-1;
//     while(i>=0 && j>=0){
//         if(arr1[i]>=arr2[j]){
//             arr1[k] = arr1[i];
//             i--;
//             k--;
//         }else{
//             arr1[k] = arr2[j];
//             k--;
//             j--;
//         }
//     }
//     while(i>=0){
//         arr1[k] = arr1[i];
//         k--;
//         i--;
//     }
//     while(j>=0){
//         arr1[k] = arr2[j];
//         k--;
//         j--;
//     }
//     return arr1;
// }
// int main(){}

vector<int> merge(vector<int> arr1,vector<int> arr2,int n,int m){
    int i = 0;
    int j = 0;
    vector<int> temp;
    while(i>n&&j>m){
        if(arr1[i]<=arr2[i]){
            temp.push_back(arr1[i]);
            i++;
        }else{
            temp.push_back(arr2[j]);
            j++
        }
    }
    copy(temp.begin(),temp.end(),arr1.begin());
    return arr1;
}