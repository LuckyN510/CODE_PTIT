#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

struct Matrix{
    ll f[15][15];
};

ll n, k;

Matrix operator * (Matrix a, Matrix b){
    Matrix c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c.f[i][j] = 0;
            for(int k = 0; k < n; k++){
                c.f[i][j] += a.f[i][k] * b.f[k][j];
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}

Matrix powMod(Matrix a, ll k){
    if(k == 1) return a;
    Matrix x = powMod(a, k / 2);
    if(k % 2 == 0) return x * x;
    return a * x * x;
}


int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Matrix a;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a.f[i][j];
            }
        }
        a = powMod(a, k);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += a.f[i][n - 1];
            sum %= mod;
        }
        cout << sum << endl;
    }
}