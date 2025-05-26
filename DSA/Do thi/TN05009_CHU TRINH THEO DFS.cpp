#include<bits/stdc++.h>

using namespace std;

int n, m, cur = -1;
vector<int> adj[10005];
bool visited[10005];
int parent[10005];
vector<int> v;

bool DFS(int u){
    visited[u] = true;
    for(int x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            if(DFS(x)){
                return true;
            }
        }
        else if(parent[u] != 1 && x == 1){
            cur = u;
            return true;
        }
    }
    return false;
}

void nhap(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
        visited[i] = false;
        parent[i] = -1;
    }
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        parent[1] = 0;
        if(DFS(1)){
            stack<int> st;
            st.push(1);
            st.push(cur);
            while(parent[cur] != 0){
                st.push(parent[cur]);
                cur = parent[cur];
            }
            while(!st.empty()){
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }
        else{
            cout << "NO\n";
        }
    }
}