#include<bits/stdc++.h>
using namespace std;
// Better Solution
void mat1(vector<vector<int>>&arr){
    vector<int>up(arr[0].size(),1);
    vector<int>down(arr.size(),1);
    for(int i =0;i<arr.size();i++){
        for(int j = 0;j<arr[0].size();j++){
            if(arr[i][j] == 0){
                up[j] = 0;
                down[i] = 0;
            }
        }
    }
    for(int i = 0;i<up.size();i++){
        if(up[i] == 0){
            for(int j =0;j<arr.size();j++){
                arr[j][i] = 0;
            }
        }
    }
    for(int i = 0;i<down.size();i++){
        if(down[i] == 0){
            for(int j =0;j<arr[0].size();j++){
                arr[i][j] = 0;
            }
        }
    }
}
// Optimal Solution
void mat(vector<vector<int>>&arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int temp = arr[0][0];
    int front  = -1;
    int side = -1;
    for(int i =1;i<m;i++){
        if(arr[0][i]==0){
            front = 0;
            break;
        }
    }
    for(int i =1;i<n;i++){
        if(arr[i][0]==0){
            side = 0;
            break;
        }
    }
    for(int i = 1;i<n;i++){
        for(int j = 1;j<m;j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    for(int i = 1;i<m;i++){
        if(arr[0][i] == 0){
            for(int j =0;j<n;j++){
                arr[j][i] = 0;
            }
        }
    }
    for(int i = 1;i<n;i++){
        if(arr[i][0] == 0){
            for(int j =0;j<m;j++){
                arr[i][j] = 0;
            }
        }
    }
    if(temp == 0){
        for(int i =0;i<m;i++){
            arr[0][i] = 0;
        }
        for(int i =0;i<n;i++){
            arr[i][0] = 0;
        }
    }
    if(front == 0){
        for(int i =0;i<m;i++){
            arr[0][i] = 0;
        }
    }
    if(side == 0){
        for(int i =0;i<n;i++){
            arr[i][0] = 0;
        }
    }


}
int main(){
    vector<vector<int>> arr = {{1,2,5,2,2},{4,2,3,5,4},{9,6,8,9,0},{1,3,4,5,3}};
    mat(arr);
    for(int i =0;i<arr.size();i++){
        for(int j = 0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}