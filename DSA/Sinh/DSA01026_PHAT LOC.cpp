#include<bits/stdc++.h>

using namespace std;

int n, x[101];

bool check(string s){
    if(s.length() < 6) return false;
    if(s[0] != '8' || s[s.length() - 1] != '6') return false;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == '8' && s[i - 1] == '8') return false;
        if(i >= 3 && s[i] == '6' && s[i - 1] == '6' && s[i - 2] == '6' && s[i - 3] == '6') return false;
    } 
    return true;
}

void in(){
    string s = "";
    for(int i = 1; i <= n; i++){
        if(x[i] == 1) s += '8';
        else s += '6';
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
    cin >> n;
    Try(1);
}