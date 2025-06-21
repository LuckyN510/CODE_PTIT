#include<bits/stdc++.h>
using namespace std;


struct edge{
    int u, v, w;
};

int n, m;
int parent[100001];
int sz[100001];
vector<edge> adj;

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

bool Union(int u, int v){
    u = Find(u);
    v = Find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]){
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}

bool cmp(edge a, edge b){
    return a.w < b.w;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        adj.clear(); 
        init();   
        for(int i = 0; i < m; i++){
            int x, y, w;
            cin >> x >> y >> w;
            adj.push_back({x, y, w});
        }
        vector<edge> MST;
        int d = 0;
        sort(adj.begin(), adj.end(), cmp);
        for(edge e : adj){
            if(MST.size() == n - 1) break;
            if(Union(e.u, e.v)){
                MST.push_back(e);
                d += e.w;
            }
        }
        cout << d << endl;
    }
}