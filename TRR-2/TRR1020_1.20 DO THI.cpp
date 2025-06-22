#include<bits/stdc++.h>

using namespace std;
const int maxn = 101;

vector<int> degreeIn, degreeOut;
vector<pair<int, int>> dsCanh;
int n;
vector<vector<int>> a(maxn, vector<int>(maxn));
vector<vector<int>> adj(maxn);
vector<vector<int>> matrix(n + 1, vector<int> (n, 0));

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    cin >> n;
    degreeIn.assign(n + 1, 0);
    degreeOut.assign(n + 1, 0);
    for(int i = 1; i <= n; i++){
        int sz; cin >> sz;
        for(int j = 0; j < sz; j++){
            int x; cin >> x;
            degreeIn[x]++;
            degreeOut[i]++;
            dsCanh.push_back({i, x});
        }
    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            cout << degreeIn[i] << " " << degreeOut[i] << endl;
        }
    }
    else if(test == 2){
        cout << n << " " << dsCanh.size() << endl;
        for(int i = 1; i <= n; i++){
            for(auto v : dsCanh){
                if(v.first == i) cout << "1 ";
                else if(v.second == i) cout << "-1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }

}