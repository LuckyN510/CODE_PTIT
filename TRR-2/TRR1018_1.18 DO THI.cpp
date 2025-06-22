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
    cin >> n;
    vector<vector<int>> matrix(n + 1, vector<int> (n + 1, 0));
    degreeIn.assign(n + 1, 0);
    degreeOut.assign(n + 1, 0);
    for(int i = 1; i <= n; i++){
        int sz; cin >> sz;
        for(int j = 0; j < sz; j++){
            int x; cin >> x;
            degreeIn[x]++;
            degreeOut[i]++;
            matrix[i][x] = 1;
        }
    }
    if(test == 1){
        for(int i = 1; i <= n; i++){
            cout << degreeIn[i] << " " << degreeOut[i] << endl;
        }
    }
    else if(test == 2){
        cout << n << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

}