#include<bits/stdc++.h>
using namespace std;
int maj(vector<int>arr){
    int num1 = 0;
    int num2 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i =0;i<arr.size();i++){
        if(cnt2==0){
            cnt2++;
            num2 = arr[i];
        }else if(num2 == arr[i]){
            cnt2++;
            
        }else{
            cnt2--;
        }
    }
    if(cnt1<cnt2){
                num1 = num2;
                cnt1 = cnt2;
            }
            cout<<cnt1;
    return num1;
}
int main(){
    vector<int> arr = {0,2,3,1,0,1};
    cout<<maj(arr);
}