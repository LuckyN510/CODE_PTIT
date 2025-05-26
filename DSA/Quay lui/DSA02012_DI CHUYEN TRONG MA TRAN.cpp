#include<bits/stdc++.h>

using namespace std;

int cnt;
int n, m, a[101][101];

void Try(int i, int j){
    if(i == n - 1 && j == m - 1){
        ++cnt;
    }
    if(i + 1 < n){
        Try(i + 1, j);
    }
    if(j + 1 < m){
        Try(i, j + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        Try(0, 0);
        cout << cnt << endl;
    }
}