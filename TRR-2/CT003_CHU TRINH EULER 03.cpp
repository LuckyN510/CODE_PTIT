#include<bits/stdc++.h>
using namespace std;
const int maxn = 105;

int n, s;
vector<set<int>> adj(maxn);
vector<bool> visited(maxn);
vector<vector<int>> a(maxn, vector<int>(maxn));
vector<int> degreeIn(maxn), degreeOut(maxn);

int cntBFS = 0;
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
         ++cntBFS;
        for(int x : adj[v]){
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int checkEuler(){
    if(cntBFS < n) return 0;
    int s = 0, t = 0;
    for(int i = 1; i <= n; i++){
        if(degreeIn[i] == degreeOut[i]) continue;
        else if(degreeIn[i] == degreeOut[i] + 1) t++;
        else if(degreeOut[i] == degreeIn[i] + 1) s++;
        else return 0;
    }
    if(s == 0 && t == 0) return 1;
    else if(s == 1 && t == 1) return 2;
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
        cin >> n;
        for(int i = 1; i <= n; i++){
            int u; cin >> u; 
            for(int j = 1; j <= u; j++){
                int x; cin >> x;
                a[i][x] = 1;
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j]){
                    adj[i].insert(j);
                    adj[j].insert(i);
                    degreeIn[i]++;
                    degreeOut[j]++;    
                }
            }
        }
        BFS(1);
        cout << checkEuler() << endl;
    }
    else if(test == 2){
        cin >> n >> s;
        for(int i = 1; i <= n; i++){
            int u; cin >> u; 
            for(int j = 1; j <= u; j++){
                int x; cin >> x;
                a[i][x] = 1;
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j]){
                    adj[i].insert(j);
                }
            }
        }
        pathEuler(s);
        reverse(path.begin(), path.end());
        for(int it : path){
            cout << it << " ";
        }
    }
}