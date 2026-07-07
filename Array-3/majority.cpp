#include<bits/stdc++.h>
using namespace std;
int maj(vector<int>arr){
    int num = INT_MIN;
    int cnt = 0;
    for(int i =0;i<arr.size();i++){
        if(cnt==0){
            cnt++;
            num = arr[i];
        }else if(num==arr[i]){
            cnt++;
        }else{
            cnt--;
        }
    }
    return num;
}
int main(){}