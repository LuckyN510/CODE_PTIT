#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
int n;
int a[1001][1001];
int deg[1001];


int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    if(test == 1){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j]){
                    deg[i]++;
                }
            }
        }
        for(int i = 1; i <= n; i++){
            cout << deg[i] << " ";
        }
        cout << endl;
    }
    else if(test == 2){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
                if(a[i][j]){
                    adj[i].push_back(j);
                }
            }
        }
        cout << n << endl;
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
            for(int j = 0; j < adj[i].size(); j++){
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
}
