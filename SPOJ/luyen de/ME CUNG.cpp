#include<bits/stdc++.h>

using namespace std;

int n, m;
int parent[100005];
int sz[100005];

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = -1;
    }
}

int Find(int u){
    if(u == parent[u]){
        return u;
    }
    return parent[u] = Find(parent[u]);
}

bool Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u == v) return false;
    else{
        if(sz[u] < sz[v]){
            swap(u, v);
        }
        sz[u] += sz[v];
        parent[v] = u ;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        init();
        bool check = 0;
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            if(!Union(x, y)){
                check = 1;
            }
        }
        if(check) cout <<"YES\n";
        else cout << "NO\n";
    }
}