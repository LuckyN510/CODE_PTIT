#include<bits/stdc++.h>

using namespace std;

int n, k;
char x[101];

bool check(string s){
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            ++cnt;
        }
    }
    return cnt == k;
}

void in(){
    string s = "";
    for(int i = 1; i <= n; i++){
        s += to_string(x[i]);
    }
    if(check(s)){
        cout << s << endl;
    }
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            in();
        }
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k; 
        Try(1);
    }
}