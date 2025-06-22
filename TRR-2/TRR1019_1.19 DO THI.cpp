#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    int test; cin >> test;
    int n; cin >> n;
    vector<pair<int, int>> dsCanh;
    vector<int> degreeIn(n + 1, 0), degreeOut(n + 1, 0);
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
        for(auto it : dsCanh){
            cout << it.first << " " << it.second << endl;
        }
    }
}