#include<bits/stdc++.h.
using namespace std;
vector<int> pas_num(int N){
    vector<int> arr;
    int result = 1;
    arr.push_back(result);
    for(int i = 1;i<N;i++){
        result *= (N-i)/i;
        arr.push_back(result);
    }
    return arr;
}
int main(){
    int N = 4;
    vector<int> arr = pass_num(N);
}