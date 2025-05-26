#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<int> adj[10005];
bool visited[10005];

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(adj[i].size() % 2 == 0){
                cnt++;
            }
        }
        if(cnt == n){
            cout << "2\n";
        }
        else if(cnt == n - 2){ // co dung 2 dinh bac le
            cout << "1\n";
        }
        else cout << "0\n";
    }
}