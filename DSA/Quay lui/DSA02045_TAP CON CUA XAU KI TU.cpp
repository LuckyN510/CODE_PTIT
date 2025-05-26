#include<bits/stdc++.h>

using namespace std;

string s;

void Try(int i, int pos, string x){
    for(int j = pos + 1; j < s.size(); j++){
        cout << x + s[j] << " ";
        Try(i + 1, j, x + s[j]);    
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n;  
        cin >> n;
        cin >> s;
        Try(1, -1, "");
        cout << endl;
    }
}