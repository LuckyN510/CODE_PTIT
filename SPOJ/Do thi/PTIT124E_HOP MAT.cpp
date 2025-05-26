#include<bits/stdc++.h>

using namespace std;

int k, n, m;
vector<int> adj[10001];
vector<int> v;
bool visited[10001];
map<int, int> mp;

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front(); q.pop();
        mp[x]++;
        for(int v : adj[x]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }


}
int main(){
    cin >> k >> n >> m;
    while(k--){
        int a; cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < m; i++){
        int x , y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int it : v){
        memset(visited, false, sizeof(visited));
        BFS(it);
    }
    int fre_max = 0;
    for(auto it : mp){
        fre_max = max(fre_max, it.second);
    }
    int cnt = 0;
    for(auto it : mp){
        if(it.second == fre_max){
            ++cnt;
        }
    }
    cout << cnt << endl;
}