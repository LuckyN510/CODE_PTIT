#include<bits/stdc++.h>

using namespace std;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int n, m, s, t, u, v;
char a[501][501];
bool ok;

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] == 'S'){
                s = i;
                t = j;
            }
            else if(a[i][j] == 'T'){
                u = i;
                v = j;
            }
        }
    }
}

void ql(int i, int j, int k_prev, int cnt){
    if(cnt > 3 || ok){
        return;
    }
    if(i == u && j == v){
        ok = true;
        return;
    }

    a[i][j] = '*'; 
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != '*'){
            if(k_prev == k){
                ql(i1, j1, k, cnt);
            }
            else{
                ql(i1, j1, k, cnt + 1);
            }
        }
    }
    a[i][j] = '.';
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        ok = false;
        nhap();
        ql(s, t, -1, 0);
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}