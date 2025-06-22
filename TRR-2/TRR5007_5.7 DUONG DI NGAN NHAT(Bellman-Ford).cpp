#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int maxn = 101;
int n, s, t;
vector<vector<int>> a(maxn, vector<int>(maxn, INF));
vector<pair<int, int>> dsCanh;
vector<int> parent(maxn, -1);

void Bellman_ford(int s){
    vector<int> d(maxn, INF);
    d[s] = 0;
    for(int i = 1; i <= n - 1; i++){
        for(auto [u, v] : dsCanh){
            if(d[u] != INF && d[v] > d[u] + a[u][v]){
                d[v] = d[u] + a[u][v];
                parent[v] = u;
            }
        }
    }
    for(auto [u, v] : dsCanh){
        if(d[u] != INF && d[v] > d[u] + a[u][v]){
            cout << "-1" << endl;
            return;
        }
    }
    if(d[t] == INF){
        cout << "0" << endl;
        return;
    }
    else{
        cout << d[t] << endl;
    }
    vector<int> path;
    while(t != s){
        path.push_back(t);
        t = parent[t];
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    for(int x : path){
        cout << x << " ";
    }
}

int main(){
    freopen("BN.INP", "r", stdin);
    freopen("BN.OUT", "w", stdout);
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0 && a[i][j] != 10000){
                dsCanh.push_back({i, j});
            }
        }
    }
    Bellman_ford(s);
    return 0;
}