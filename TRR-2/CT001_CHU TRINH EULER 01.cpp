#include<bits/stdc++.h>

using namespace std;
const int maxn = 101;

vector<set<int>> adj(maxn);
vector<int> degree(maxn);
vector<bool> visited(maxn);
int n, m, s;

int cntDFS = 0;
void DFS(int u){
    cntDFS++;
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

int checkEuler(){
    if(cntDFS < n) return 0;
    int dem = 0;
    for(int x : degree){
        if(x % 2 != 0){
            dem++;
        }
    }
    if(dem == 0) return 1; // ton tai chu trinh euler
    else if(dem == 2) return 2; // ton tai duong di euler
    return 0; 
}

vector<int> path;

void pathEuler(int s){
    stack<int> st;
    st.push(s);
    while(!st.empty()){
        int u = st.top();
        if(!adj[u].empty()){
            int v = *adj[u].begin();
            st.push(v);
            adj[u].erase(v);
            adj[v].erase(u);
        }
        else{
            path.push_back(u);
            st.pop();
        }
    }
}


int main(){
    int test; cin >> test;
    if(test == 1){
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].insert(y);
            adj[y].insert(x);
            degree[x]++;
            degree[y]++;
        }
        DFS(1);
        cout << checkEuler() << endl;
    }
    else if(test == 2){
        cin >> n >> m >> s;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].insert(y);
            adj[y].insert(x);
        }
        pathEuler(s);
        reverse(path.begin(), path.end());
        for(int it : path){
            cout << it << " ";
        }
    }
}