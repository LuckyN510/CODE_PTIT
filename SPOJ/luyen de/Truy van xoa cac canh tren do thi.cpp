#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int parent[100005], sz[100005];
int n, m, q;
vector<pair<int, int>> dsCanh;
vector<pair<int, int>> query;
bool visited[100005];

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
    if(u == v) return;
    if(sz[u] < sz[v]){
        swap(u, v);
    }
    sz[u] += sz[v];
    parent[v] = u;
}

int main(){
    cin >> n >> m >> q;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        dsCanh.push_back({x, y});
    }
    for(int i = 0; i < q; i++){
        int e, u; cin >> e >> u;
        query.push_back({e - 1, u});
        visited[e - 1] = true;
    }
    init();
    for(int i = 0; i < m; i++){
        if(!visited[i]){
            int u = dsCanh[i].first;
            int v = dsCanh[i].second;
            Union(u, v);
        }
    }
    int res[q];
    // xay dung lai do thi
    for(int i = q - 1; i >= 0; i--){
        int e = query[i].first;
        int u = query[i].second;
        res[i] = sz[Find(u)];
        int x = dsCanh[e].first;
        int y = dsCanh[e].second;
        Union(x, y);
    }
    for(int i = 0; i < q; i++){
        cout << res[i] << "\n#i";
    }
}



































// set<int> adj[3001];
// int n, m, q;
// bool visited[3001];
// vector<pair<int, int>> edges;
// set<int> deleted;


// int dfs(int u){
//     visited[u] = true;
//     int cnt = 1;
//     for(int v : adj[u]){
//         if(!visited[v]){
//            cnt += dfs(v);
//         }
//     }
//     return cnt;
// }

// int main(){
//     cin >> n >> m >> q;
//     edges.push_back({0, 0});
//     for(int i = 0; i < m; i++){
//         int x, y;
//         cin >> x >> y;
//         edges.push_back({x, y});
//         adj[x].insert(y);
//         adj[y].insert(x);
//     }

//     while(q--){
//         int u, v;
//         cin >> u >> v;
//         if(!deleted.count(u)){
//             deleted.insert(u);
//             int a = edges[u].first;
//             int b = edges[u].second;
//             if(a != b){
//                 adj[a].erase(b);
//                 adj[b].erase(a);
//             }
//             else{
//                 for(int v : adj[a]){
//                     adj[v].erase(a);
//                 }
//                 adj[a].clear();
//             }
//         }
//         memset(visited, false, sizeof(visited));
//         int res = dfs(v);
//         cout << res << endl;
//     }
// }
