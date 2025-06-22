    #include<bits/stdc++.h>
    using namespace std;

    int n, u;
    vector<int> adj[101];
    set<int> adj1[101];
    int a[101][101];
    bool visited[101];
    vector<int> path;;

    void DFS(int u){
        visited[u] = true;
        for(int v : adj[u]){
            if(!visited[v]){
                DFS(v);
            }
        }
    }

    bool isConnected(){
        memset(visited, false, sizeof(visited));
        int start = -1;
        for(int i = 1; i <= n; i++){
            if(!adj[i].empty()){
                start = i;
                break;
            }
        }
        if(start == -1) return false;
        DFS(start);
        for(int i = 1; i <= n; i++){
            if(!adj[i].empty() && !visited[i]){
                return false;
            }
        }
        return true;
    }

    void EulerCycle(int u){
        stack<int> st;
        st.push(u);
        while(!st.empty()){
            int v = st.top();
            if(!adj1[v].empty()){
                int w = *adj1[v].begin();
                st.push(w);
                adj1[v].erase(w);
                adj1[w].erase(v);
            } 
            else{
                path.push_back(v);
                st.pop();
            }
        }
    }

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        freopen("CT.INP", "r", stdin);
        freopen("CT.OUT", "w", stdout);
        int test; cin >> test;
        if(test == 1){
            cin >> n;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    cin >> a[i][j];
                    if(a[i][j] == 1){
                        adj[i].push_back(j);
                    }
                }
            }
            if(!isConnected()){
                cout << "0\n";
            }
            else{
                int cnt = 0;
                for(int i = 1; i <= n; i++){
                    if(adj[i].size() % 2 == 0){
                        ++cnt;
                    }
                }
                if(cnt == n){
                    cout << "1\n";
                }
                else if(cnt == n - 2){
                    cout << "2\n";
                }
                else{
                    cout << "0\n";
                }
            }
        }
        else if(test == 2){
            cin >> n >> u;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    cin >> a[i][j];
                    if(a[i][j] == 1){
                        adj1[i].insert(j);
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