#include<bits/stdc++.h>

using namespace std;
const int maxn = 101;

vector<int> degreeIn, degreeOut;
vector<pair<int, int>> dsCanh;
int n, m;
vector<vector<int>> a(maxn, vector<int>(maxn));
vector<vector<int>> adj(maxn);

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    cin >> n >> m;
    vector<vector<int>> matrix(n + 1, vector<int> (m + 1, 0));
    degreeIn.assign(n + 1, 0);
    degreeOut.assign(n + 1, 0);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        degreeIn[y]++;
        degreeOut[x]++;
        dsCanh.push_back({x, y});

    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            cout << degreeIn[i] << " " << degreeOut[i] << endl;
        }
    }
    else if(test == 2){
        cout << n << " " << dsCanh.size() << endl;
        for(int i = 1; i <= n; i++){
            for(auto it : dsCanh){
                if(it.first == i) cout << "1 ";
                else if(it.second == i) cout << "-1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }

}