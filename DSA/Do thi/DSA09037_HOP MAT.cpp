#include<bits/stdc++.h>

using namespace std;

int k, n, m;
vector<int> adj[10005];
bool visited[10005];
vector<int> address;
vector<pair<int, int>> v;
int cnt[10005];

void DFS(int u){
    cnt[u]++;
    v.push_back({u, cnt[u]});
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

void nhap(){
    cin >> k >> n >> m;
    for(int i = 0; i < k; i++){
        int s; 
        cin >> s;
        address.push_back(s);
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
}

int main(){
    nhap();
    int dem = 0;
    for(int x : address){
        DFS(x);
        memset(visited, false, sizeof(visited));
    }
    for(auto it : v){
        if(it.second == k){
            ++dem;
        }
    }
    cout << dem;
}