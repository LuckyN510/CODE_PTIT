#include<bits/stdc++.h>

using namespace std;

// kiểm tra các kí tự trong xâu phải khác nhau
bool check(string s){
    set<char> se;
    for(char x : s){
        se.insert(x);
    }
    return s.size() == se.size();
}

vector<string> v;

void init(){
    queue<string> q;
    q.push("1");
    q.push("2");
    q.push("3");
    q.push("4");
    q.push("5");
    while(!q.empty()){
        string u = q.front(); q.pop();
        if(u.length() > 5){
            break;
        }
        if(check(u)){
            v.push_back(u);
        }
        for(char c = '0'; c <= '5'; c++){
            q.push(u + c);
        }
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for(string it : v){
            if(stoi(it) >= l && stoi(it) <= r){
                ++cnt;
            }
        }
        cout << cnt <<endl;
    }
}