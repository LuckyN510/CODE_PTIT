#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int parent[100005];
int sz[100005];

int Find(int u){
    if(u == parent[u]){
        return u;
    }
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u == v) return;
    if(sz[u] < sz[v]){
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
}

int main(){
    int n; cin >> n;
    int m; cin >> m;
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        Union(x, y);
    }
    int root = Find(1);
    int maxVal = 0;
    for(int i = 2; i <= n; i++){
        if(root != Find(i)){
            maxVal = max(maxVal, sz[Find(i)]);
        }
    }
    cout << maxVal + sz[root];
}