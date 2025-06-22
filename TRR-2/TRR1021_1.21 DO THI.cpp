#include<bits/stdc++.h>

using namespace std;

struct canh{
    int x, y, w;
};

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    int n; cin >> n;
    vector<canh> dsCanh;
    vector<int> degreeIn(n + 1, 0), degreeOut(n + 1, 0);
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] != 0 && a[i][j] != 10000){
                degreeIn[j]++;
                degreeOut[i]++;
                dsCanh.push_back({i, j, a[i][j]});
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
            cout << it.x << " " << it.y <<" " << it.w << endl;
        }
    }
}