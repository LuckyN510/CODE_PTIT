#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.length();
        while(n > 0 && s[n - 1] == '1'){
            s[n - 1] = '0';
            --n;
        }
        if(n - 1 >= 0){
            s[n - 1] = '1';
            cout << s << endl;
        }
        else{
            cout << s << endl;
        }
    }
}