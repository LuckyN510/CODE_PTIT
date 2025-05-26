#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        priority_queue<int> q;
        map<char, int> mp;
        for(char c : s){
            mp[c]++;
        }
        for(auto it : mp){
            q.push(it.second);
        }
        while(k--){
            int u = q.top();
            q.pop();
            u--;
            q.push(u);
        }
        int sum = 0;
        while(!q.empty()){
            sum += pow(q.top(), 2);
            q.pop();
        }
        cout << sum << endl;
    }
}