#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[10005];
vector<int> re_adj[10005];
bool visited[10005];
stack<int> st;

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        re_adj[i].clear();
        visited[i] = false;
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        re_adj[y].push_back(x);
    }
}

void DFS1(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            DFS1(x);
        }
    }
    st.push(u);
}


void DFS2(int u){
    visited[u] = true;
    for(int x : re_adj[u]){
        if(!visited[x]){
            DFS2(x);
        }
    }
}

void Korasaju(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS1(i);
        }
    }
    memset(visited, false, sizeof(visited));
    while(!st.empty()){
        int v = st.top();
        st.pop();
        if(!visited[v]){
            DFS2(v);
            ++cnt;
        }
    }
    if(cnt == 1) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        Korasaju();
    }
}