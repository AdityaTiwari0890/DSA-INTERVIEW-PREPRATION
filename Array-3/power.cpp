#include<bits/stdc++.h>
using namespace std;
int power(int n,int m){
    if(n==0){
        return 0;
    }
    bool neg = false;
    if(n<0){
        neg = true;
    }
    
    if(m%2==0){
        return power(n*n,m/2);
    }else{
        return power(n*power(n,m-1));
    }
    return neg?-n:n;
}
int main(){

}