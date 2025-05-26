#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}

int BFS(string s, string t){
    if(s == t) return 0;
    queue<pair<int, string>> q;
    q.push({0, s});
    set<string> se;
    se.insert(s);
    while(!q.empty()){
        auto u = q.front(); q.pop();
        string tmp = u.second;
        int step = u.first;
        if(u.second == t){
            return step;
        }
        for(int i = 0; i < 4; i++){
            char cur = tmp[i];
            for(char c = '0'; c <= '9'; c++){
                tmp[i] = c;
                if(tmp[0] == '0') continue;
                if(cur == c) continue;
                if(!se.count(tmp) && isPrime(stoi(tmp))){
                    q.push({step + 1, tmp});
                    se.insert(tmp);
                }
            }
            tmp[i] = cur;
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        cout << BFS(s, t) << endl;
    }
}