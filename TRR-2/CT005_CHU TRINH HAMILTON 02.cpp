#include<bits/stdc++.h>

using namespace std;
const int maxn = 101;
vector<vector<int>> a(maxn, vector<int> (maxn));
vector<bool> visited(maxn, false);
vector<vector<int>> adj(maxn);
int n, m, u;
vector<int> path;
vector<vector<int>> res;

void Hamilton(int i){
    for(int j = 1; j <= n; j++){
        if(!visited[j] && a[path[i - 1]][j] == 1){
            visited[j] = true;
            path.push_back(j);
            if(i == n){
                if(a[j][path[1]]){
                    path.push_back(path[1]);
                    res.push_back(path);
                    path.pop_back();
                }
            }
            else{
                Hamilton(i + 1);
            }
            visited[j] = false;
            path.pop_back();
        }
    }
}


int main(){
    cin >> n >> m >> u;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    path.push_back(0);
    path.push_back(u);
    visited[u] = true;
    Hamilton(2);
    if(!res.empty()){
        cout << res.size() << endl;
        for(auto v : res){
            for(int i = 1; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "0\n";
    }
}