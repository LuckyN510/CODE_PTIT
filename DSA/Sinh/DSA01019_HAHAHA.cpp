#include<bits/stdc++.h>

using namespace std;

int n;
int x[101];

bool check(string s){
    if(s[0] != 'H' || s[s.length() - 1] != 'A') return false;
    for(int i = 0; i < s.length() - 1; i++){
        if(s[i] == 'H' && s[i + 1] == 'H'){
            return false;
            break;
        }
    }
    return true;
}

void in(){
    string s = "";
    for(int i = 1; i <= n; i++){
        if(x[i] == 1) s += 'H';
        else s += 'A';
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
        cin >> n; 
        Try(1);
    }
}