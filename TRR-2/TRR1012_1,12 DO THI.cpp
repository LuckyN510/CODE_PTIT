#include<bits/stdc++.h>

using namespace std;
const int maxn = 101;

vector<int> degreeIn, degreeOut;
vector<pair<int, int>> dsCanh;
int n;
vector<vector<int>> a(maxn, vector<int>(maxn));

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    cin >> n;
    degreeIn.assign(n + 1, 0);
    degreeOut.assign(n + 1, 0);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                degreeOut[i]++;
                degreeIn[j]++;
                dsCanh.push_back({i, j});
            }
        }
    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            cout << degreeIn[i] << " " << degreeOut[i] << endl;
        }
    }
    else if(test == 2){
        cout << n << " " << dsCanh.size() << endl;
        for(auto it : dsCanh){
            cout << it.first << " " << it.second << endl;
        }
    }

}