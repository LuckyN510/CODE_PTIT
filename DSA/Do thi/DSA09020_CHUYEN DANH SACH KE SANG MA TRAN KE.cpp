#include<bits/stdc++.h>

using namespace std;

int a[1005][1005];
int n;

void solve(int i, string s){
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        int j = stoi(tmp);
        if(j > i){
            a[i][j] = 1;
            a[j][i] = 1;
        }
    }
}

int main(){
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s; 
        getline(cin, s);
        solve(i, s);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
