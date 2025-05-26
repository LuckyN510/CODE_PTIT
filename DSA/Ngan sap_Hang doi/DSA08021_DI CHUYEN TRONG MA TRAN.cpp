#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[1005][1005];  
bool visited[1005][1005];

int BFS(){
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {1, 1}});
    visited[1][1] = true;
    while(!q.empty()){
        auto it = q.front(); q.pop();
        int i1 = it.second.first, j1 = it.second.second;
        int step = it.first;
        if(i1 == n && j1 == m){
            return step;
        }
        if(i1 + a[i1][j1] <= n && visited[i1 + a[i1][j1]][j1] == false){
            q.push({step + 1, {i1 + a[i1][j1], j1}});
            visited[i1 + a[i1][j1]][j1] = true;
        }
        if(j1 + a[i1][j1] <= m && visited[i1][j1 + a[i1][j1]] == false){
            q.push({step + 1, {i1, j1 + a[i1][j1]}});
            visited[i1][j1 + a[i1][j1]] = true;
        }
    }
    return -1;
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
        memset(visited, false, sizeof(visited));
        cout << BFS() << endl;
    }
}