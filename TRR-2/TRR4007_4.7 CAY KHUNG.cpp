#include<bits/stdc++.h>

using namespace std;

struct canh{
    int x, y, w;
};

int parent[101];
int sz[101];
int n, m;
vector<canh> dsCanh;

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

bool cmp(canh a, canh b){
    if(a.w == b.w && a.x == b.x) return a.y < b.y;
    else if(a.w == b.w) return a.x < b.x;
    return a.w < b.w;
}

void Kruskal(){
    vector<canh> MST;
    long long d = 0;
    sort(dsCanh.begin(), dsCanh.end(), cmp);
    for(int i = 0; i < m; i++){
        if(MST.size() == n - 1) break;
        canh e = dsCanh[i];
        if(Union(e.x, e.y)){
            MST.push_back(e);
            d += e.w;
        }
    }
    if(MST.size() < n - 1){
        cout << "0\n";
    }
    else{
        cout << d << endl;
        for(canh it : MST){
            cout << it.x << " " << it.y << " " << it.w << endl;
        }
    }
}

int main(){
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        dsCanh.push_back({x, y, w});
    }
    init();
    Kruskal();
}