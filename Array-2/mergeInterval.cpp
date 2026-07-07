#include<bits/stdc++.h>
using namespace std;
stack<pair<int,int>> merge(vector<pair<int,int>>&arr){
    sort(arr.begin(),arr.end(),[](pair<int,int>a, pair<int,int>b){
        return a.first>b.first;
    });
    stack<pair<int,int>>st;
    for(auto a: arr){
        if(!st.empty()&&a.first<=st.top().second){
            pair<int,int> temp = st.top();
            st.pop();
            st.push({temp.first,max(a.second,temp.second)});
        }else
        st.push(a);
    }
    return st;
}
int main(){}