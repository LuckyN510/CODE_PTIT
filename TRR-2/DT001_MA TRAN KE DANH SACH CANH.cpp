#include<bits/stdc++.h>

using namespace std;
const int maxn = 105;

vector<int> degree(maxn);
int n;
vector<vector<int>> a(maxn, vector<int>(maxn));
vector<vector<int>> adj(maxn);
vector<pair<int, int>> dsCanh;

int main(){
    int test; cin >> test;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] && i < j){
                degree[i]++;
                degree[j]++;
                adj[i].push_back(j);
                adj[i].push_back(j);
                dsCanh.push_back({i, j});
            }
        }
    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            cout << degree[i] << " ";
        }
    }
    else if(test == 2){
        cout << n << " " << dsCanh.size() << endl;
        for(auto it : dsCanh){
            cout << it.first << " " << it.second << endl;
        }
    }
}