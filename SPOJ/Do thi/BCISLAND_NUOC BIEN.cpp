#include<bits/stdc++.h>
using namespace std;

int n, m, extra, Hmax;
int visited[101][101], visited_connect[101][101];
int a[101][101];

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void nhap(){
    cin >> n >> m;
    Hmax = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            Hmax = max(Hmax, a[i][j]);
        }
    }
}

void loang(int i, int j){
    visited[i][j] = true;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && !visited[i1][j1] && a[i1][j1] <= extra){
            loang(i1, j1);
        }
    }
}

void DFS(int i, int j){
    visited_connect[i][j] = true;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && !visited_connect[i1][j1] && visited[i1][j1] == visited_connect[i1][j1]){            
            DFS(i1, j1);
        }
    }
}


int main(){
    int test = 0;
    while(1){
        test++;
        nhap();
        if(n == 0 && m == 0){
            break;
        }
        bool check = false;
        for(int k = 0; k < Hmax; k++){
            extra = k;
            memset(visited, 0, sizeof(visited));
            memset(visited_connect, 0, sizeof(visited_connect));
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if((i == 0 || i == n - 1 || j == 0 || j == m - 1) && !visited[i][j] && a[i][j] <= k) {
                        loang(i, j);
                    }
                }
            }
            int cnt = 0;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(!visited_connect[i][j] && !visited[i][j]){
                        ++cnt;
                        DFS(i, j);
                    }
                }
            }
            if(cnt > 1){
                check = true;
                break;
            }
        }
        if(check) cout<<"Case "<<test<<": Island splits when ocean rises "<<extra<<" feet."<<endl;
		else cout<<"Case "<<test<<": Island never splits."<<endl;
    }
}