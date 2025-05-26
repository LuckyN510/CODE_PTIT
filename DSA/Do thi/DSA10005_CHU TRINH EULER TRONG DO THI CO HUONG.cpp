#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<int> adj[10005];
bool visited[10005];
int degIn[10005], degOut[10005];
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            degIn[i] =  -1;
            degOut[i] = -1;
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            degIn[x]++;
            degOut[y]++;
        }
        bool check = true;
        for(int i = 1; i <= n; i++){
            if(degIn[i] != degOut[i]){
                check = false;
            }
        }
        if(check) cout << "1\n";
        else cout << "0\n";
    }
}