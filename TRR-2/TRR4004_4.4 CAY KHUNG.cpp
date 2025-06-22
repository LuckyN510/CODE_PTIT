#include<bits/stdc++.h>
using namespace std;

const int maxn = 101;

struct canh{
    int x, y, w;
};

int n, s;
vector<vector<int>> a(maxn, vector<int> (maxn));
vector<pair<int, int>> adj[maxn];
vector<bool> visited(maxn, false);

void Prim(int s){
    vector<canh> MST;
    visited[s] = true;
    int d = 0;
    while(MST.size() < n - 1){
        int X = -1, Y = -1;
        int min_w = INT_MAX;
        for(int i = 1; i <= n; i++){
            if(visited[i]){
                for(auto [j, w] : adj[i]){
                    if(!visited[j] && w < min_w){
                        min_w = w;
                        X = i;
                        Y = j;
                    }
                }
            }
        }
        if(X == -1) break;
        MST.push_back({min(X, Y), max(X, Y), min_w});
        d += min_w;
        visited[Y] = true;
    }
    cout << d << endl;
    for(auto v : MST){
        cout << v.x << " " << v.y << " " << v.w << endl;
    }
}

int main(){
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0 && a[i][j] != 10000){
                adj[i].push_back({j, a[i][j]});
                adj[j].push_back({i, a[i][j]});
            }
        }
    }
    Prim(s);
}