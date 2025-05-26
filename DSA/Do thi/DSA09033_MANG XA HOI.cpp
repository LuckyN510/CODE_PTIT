#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[100001];
bool visited[100001];
int cnt = 0;

void DFS(int u){
    ++cnt;
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
           DFS(x);
        }
    }
}

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        visited[i] = false;
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        int soCanh = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                cnt = 0;
                DFS(i);
                soCanh += cnt*(cnt - 1)/2; // += ở đây là trường hợp đồ thì có nhiều thành phần liên thông
            }
        }
        if(soCanh == m) cout << "YES\n"; // 2 đỉnh thì có 1 canh thì n đỉnh có C2n cạnh
        else cout << "NO\n";
    }
}