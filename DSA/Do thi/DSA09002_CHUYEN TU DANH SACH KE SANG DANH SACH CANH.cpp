#include<bits/stdc++.h>

using namespace std;

void solve(int i, string s){
    stringstream ss(s);
    string tmp;
    vector<int> v;
    while(ss >> tmp){
        int j = stoi(tmp);
        if(j > i) {
            cout << i << " " << j << endl;
        }
    }
}

int main(){  
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        solve(i, s);
    }
    
}