#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        map<char, int> mp;
        int n = s.length(); 
        for(char c : s){
            mp[c]++;
        }
        int k = 0;
        for(auto it : mp){
            k = max(k, it.second);
        }
        if((k - 1) > n - k) cout << "-1\n";
        else cout << "1\n";
    } 
}