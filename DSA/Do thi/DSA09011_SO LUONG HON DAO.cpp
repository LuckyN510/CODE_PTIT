#include<bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int n, m;
int a[501][501];

void DFS(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1){
            DFS(i1, j1);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == 1){
                    ++cnt;
                    DFS(i, j);
                }
            }
        }
        cout << cnt << endl;
    }  
}