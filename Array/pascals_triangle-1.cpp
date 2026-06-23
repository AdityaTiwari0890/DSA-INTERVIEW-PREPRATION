#include<bits/stdc++.h>
using namespace std;
int pas_num(int r,int c){
    r = r-1;
    c = c-1;
    int val = 1;
    for(int i = 0;i<min(r-c,c);i++){
        val *= (r-i)/(i+1);
    }
    return val;
}
int main(){
    // int N = 5;
    int r = 4;
    int c = 3;
    cout<<pas_num(r,c);
}