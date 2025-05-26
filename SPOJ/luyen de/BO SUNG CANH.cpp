#include<bits/stdc++.h>

using namespace std;

vector<int> adj[100005];
int n, m;
bool visited[100005];
int parent[100005];
int sz[100005];

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u){
    if(u == parent[u]){
        return u;
    }
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u == v) return ;
    if(sz[u] < sz[v]){
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
}

int main(){
    cin >> n >> m;
    init();
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        Union(x, y);
    }
    int root1 = Find(1);
    int count1 = sz[root1];
    int max_other = 0;// cap nhap mang SZ lon nhat cua cac dinh khac
    for(int i = 1; i <= n; i++){
        int root = Find(i);
        if(root != root1){
            max_other = max(max_other, sz[root]);
        }
    }
    cout << count1 + max_other << endl;
}