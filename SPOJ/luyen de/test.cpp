#include<bits/stdc++.h>
using namespace std;

int n, m, q, e, u, parent[100005], num[100005];
vector<pair<int,int>> canh;
bool xoa[100005];

void init(){
    for (int i = 1; i <= n; i++){
        parent[i] = i;
        num[i] = 1;
    }
}

int Find(int u){
    if(u != parent[u]){
        parent[u] = Find(parent[u]);
    }
    return parent[u];
}

void Union(int u, int v){
    int a = Find(u), b = Find(v);
    if (a == b) return;
    if (num[a] < num[b]) swap(a, b);
    parent[b] = a;
    num[a] += num[b];
}

int main(){
    memset(xoa, false, sizeof(xoa));
    cin >> n >> m >> q;
    for (int i = 1; i <= m; i++){
        int a, b;
        cin >> a >> b;
        canh.push_back({a,b});
    }
    for(int i = 1; i <= q; i++){
        init();
        cin >> e >> u;
        xoa[e] = true;
        for (int i = 0; i < canh.size(); i++){
            if(!xoa[i + 1]){
                Union(canh[i].first, canh[i].second);
            }
        }
        cout << num[parent[u]] << endl;
    }
    return 0;
}
