#include<bits/stdc++.h>
using namespace std;

int n, u;
vector<int> adj[101], re_adj[101], adjUndir[101];
vector<int> adj1[101];
int a[101][101];
bool visited[101];
vector<int> path;;
int degreeIn[101], degreeOut[101];

void DFS(int u, vector<int> dsKe[]){
    visited[u] = true;
    for(int v : dsKe[u]){
        if(!visited[v]){
            DFS(v, dsKe);
        }
    }
}



bool isStronglyConnected(){
    memset(visited, false, sizeof(visited));
    DFS(1, adj);
    for (int i = 1; i <= n; i++){
        if ((adj[i].size() > 0 || re_adj[i].size() > 0) && !visited[i]){
            return false;
        }
    }

    memset(visited, false, sizeof(visited));
    DFS(1, re_adj);
    for (int i = 1; i <= n; i++){
        if ((adj[i].size() > 0 || re_adj[i].size() > 0) && !visited[i]){
            return false;
        }
    }

    return true;
}

bool isWeaklyConnected(){
    memset(visited, false, sizeof(visited));
    DFS(1, adjUndir);
    for (int i = 1; i <= n; i++){
        if (!adjUndir[i].size() && !visited[i]){
            return false;
        }
    }
    for(int i = 1; i <= n; i++){
        if(degreeIn[i] + degreeOut[i] > 0 && !visited[i]){
            return false;
        }
    }
    return true;
}

void EulerCycle(int u) {
    vector<int> it(n + 1, 0);
    stack<int> st;
    st.push(u);
    while (!st.empty()) {
        int v = st.top();
        if (it[v] < (int)adj1[v].size()) {
            int w = adj1[v][it[v]++];
            st.push(w);
        } else {
            path.push_back(v);
            st.pop();
        }
    }
}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    int test; cin >> test;
    if(test == 1){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    adj[i].push_back(j);
                    re_adj[j].push_back(i);
                    degreeOut[i]++;
                    degreeIn[j]++;
                    adjUndir[i].push_back(j);
                    adjUndir[j].push_back(i);
                }
            }
        }
        bool check = true;
        for(int i = 1; i <= n; i++){
            if(degreeIn[i] != degreeOut[i]){
                check = false;
                break;
            }
        }
        if(check && isStronglyConnected()){
            cout << "1\n";
            return 0;
        }
        int st = 0, ed = 0;
        for(int i = 1; i <= n; i++){
            if(degreeOut[i] == degreeIn[i] + 1) st++;
            else if(degreeIn[i] == degreeOut[i] + 1) ed++;
            else if(degreeIn[i] != degreeOut[i]){
                cout << "0\n";
                return 0;
            }
        }
        if(st == 1 && ed == 1 && isWeaklyConnected()){
            cout << "2\n";
        }
        else{
            cout << "0\n";
        }
    }
    else if(test == 2){
        cin >> n >> u;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    adj1[i].push_back(j);
                }
            }
        }
        EulerCycle(u);
        reverse(path.begin(), path.end());
        for(int x : path){
            cout << x << " ";
        }
    }
}