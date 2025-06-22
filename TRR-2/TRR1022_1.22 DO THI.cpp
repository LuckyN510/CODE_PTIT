#include<bits/stdc++.h>

using namespace std;

struct canh{
    int x, y, w;
};
const int maxn = 101;
int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    int n; cin >> n;
    int m; cin >> m;
    vector<vector<int>> a(n + 1 , vector<int> (n + 1, 10000));
    vector<int> degreeIn(n + 1, 0), degreeOut(m + 1, 0);
    for(int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        degreeIn[y]++;
        degreeOut[x]++;
        a[x][y] = w;
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
                if(i == j) cout << "0 ";
                else cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}