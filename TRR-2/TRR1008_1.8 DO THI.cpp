#include<bits/stdc++.h>

using namespace std;

vector<int> adj[101];
int n, m;
int deg[101];
int a[101][101];

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int x; cin >> x;
            a[i][x] = 1; 
            a[x][i] = 1;
        }
    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            int deg = 0;
            for(int j = 1; j <= n; j++){
                if(a[i][j]){
                    deg++;
                }
            }
            cout << deg << " ";
        }
        cout << endl;
    }
    if(test == 2){
        vector<pair<int, int>> v;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j] && i < j){
                    v.push_back({i, j});
                }
            }
        }
        cout << n << " " << v.size() << endl;
        for(auto it : v){
            cout << it.first << " " << it.second << endl;
        }
    }
}