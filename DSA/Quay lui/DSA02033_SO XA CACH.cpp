#include<bits/stdc++.h>

using namespace std;

int n, x[101];
bool used[101];
vector<string> v;

bool check(string s){
    for(int i = 0; i < s.length() - 1; i++){
        if(abs((s[i] - '0')- (s[i + 1] - '0')) == 1){
            return false;
        }
    }
    return true;
}

void in(){
    string s = "";
    for(int i = 1; i <= n; i++){
        s += to_string(x[i]);
    }
    if(check(s))
        v.push_back(s);
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == n){
                in();
            }
            else Try(i + 1);
            used[j] = 0;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        Try(1);
        for(string x : v){
            cout << x << endl;
        }
    }
}