#include<bits/stdc++.h>
using namespace std;
int kadanes(vector<int> arr){
    int prev = -1;
    int end = -1;
    int i = 0;
    int j =0;
    int largest = -1;
    int num = 0;

    while(j<arr.size()){
        num += arr[j];
        if(num > largest){
            largest = num;
            prev = i;
            end = j;
        }
        else if(num<=0){
            num = 0;
            i = j+i;
        }
        j++;
    }
    return largest;
}
int main(){}