#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
ll f[105][105];

void init(){
    for(int i = 1; i <= 100; i++){
        f[i][0] = 1;
    }
    for(int j = 0; j <= 9; j++){
        f[1][j] = 1;
    }
    for(int i = 2; i <= 100; i++){
        for(int j = 1; j <= 9; j++){
            f[i][j] = 0;
            for(int k = 0; k <= j; k++){
                f[i][j] += f[i - 1][k];
                f[i][j] %= mod;
            }
        }
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll sum = 0;
        for(int j = 0; j <= 9; j++){
            sum += f[n][j];
            sum %= mod;
        }
        cout << sum << "\n";
    }
}