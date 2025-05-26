#include<bits/stdc++.h>

using namespace std;

int n, m, k;
vector<int> adj[10005];
int color[10005];

void nhap(){
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        color[i] = 0;
    } 
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}
// kiểm tra xem đỉnh u có tô đc màu c hay ko?
bool check(int u, int c){
    for(int x : adj[u]){
        if(color[x] == c) return false; // các đỉnh kề của u đã đc tô màu c rồi thì u ko đc tô màu c nữa
    }
    return true;
}

// Thử tô màu từng đỉnh từ 1 đến n bằng backtracking
bool solve(int u){
    if(u > n) return true; // đã tô xong
    for(int c = 1; c <= k; c++){
        if(check(u, c)){
            color[u] = c;
            if(solve(u + 1)){
                return true;
            }
            color[u] = 0; // đỉnh ko tô đc màu c thì backtrack lại = 0
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        if(solve(1)) cout << "YES\n";
        else cout << "NO\n";
    }
}