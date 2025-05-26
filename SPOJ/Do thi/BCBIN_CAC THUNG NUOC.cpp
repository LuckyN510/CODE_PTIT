#include<bits/stdc++.h>

using namespace std;

vector<int> adj[10005];
int n; 
int parent[10005];
int sz[10005];

void init(){
    for(int i = 1; i <= 10000; i++){
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
    init();
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        if(z == 1){
            Union(x, y);
        }
        else{
            x = Find(x);
            y = Find(y);
            if(x != y){
                cout << "0\n";
            }
            else{
                cout << "1\n";
            }
        }
    }
}