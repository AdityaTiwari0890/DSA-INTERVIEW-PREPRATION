#include<bits/stdc++.h>
using namespace std;
int ladder(string b,string e, vector<string>l){
    if(b==e) return 0;
    unordered_set<string>mp;
    for(string s:l){
        mp.push(s);
    }
    queue<pair<string,int>q;
    q.push({b,1});
    while(!q.empty()){
        string word = q.front().first;
        int level = q.front().second;
        q.pop();
        if(word == e){
            return level;
        }
        for(int i =0;i<word.size();i++){
            char original = word[i];
            for(char c = 'a';ch<='z';ch++){
                word[i] = ch;
                if(mp.frind(word)!=mp.end()){
                    q.push(word);
                    st.erase({word,level+1});
                }
            }
        }
        word[i] = original;
    }

    return 0;
}
int main(){}