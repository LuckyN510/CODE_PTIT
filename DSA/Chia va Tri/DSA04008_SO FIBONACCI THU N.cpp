#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
struct Matrix{
    ll f[2][2];
};

Matrix operator * (Matrix a, Matrix b){
    Matrix c;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            c.f[i][j] = 0;
            for(int k = 0; k < 2; k++){
                c.f[i][j] += a.f[i][k] * b.f[k][j];
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}

Matrix powMod(Matrix a, ll n){
    if(n == 1) return a;
    Matrix x = powMod(a, n / 2);
    if(n % 2 == 0) return x * x;
    return a * x * x;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        Matrix a;
        a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
        a.f[1][1] = 0;
        a = powMod(a, n);
        cout << a.f[1][0] << endl;
    }
}