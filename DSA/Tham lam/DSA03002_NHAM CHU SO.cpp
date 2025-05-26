#include<bits/stdc++.h>

using namespace std;

int convert(string s, char p, char q){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == p){
            s[i] = q;
        }
    }
    return stoi(s);
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << convert(a, '6', '5') + convert(b, '6', '5') << " ";
    cout << convert(a, '5', '6') + convert(b, '5', '6');
}