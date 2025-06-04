#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e15 + 7;

struct Matrix {
    ll f[4][4];
};

ll mulNumber(ll a, ll b) {
    if (b == 0) return 0;
    ll ans = mulNumber(a, b / 2);
    ans = (ans + ans) % MOD;
    if (b % 2 != 0) ans = (ans + a) % MOD;
    return ans;
}

Matrix operator*(Matrix a, Matrix b) {
    Matrix c;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c.f[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                c.f[i][j] = (c.f[i][j] + mulNumber(a.f[i][k], b.f[k][j])) % MOD;
            }
        }
    }
    return c;
}

Matrix powerMod(Matrix a, int n) {
    if (n == 1) return a;
    Matrix x = powerMod(a, n / 2);
    if (n % 2 == 0) return x * x;
    return a * x * x;
}

ll x[] = {6, 3, 2, 1};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(!n) cout << "0\n";
        else if (n == 1) cout << "1\n";
        else if (n == 2) cout << "3\n";
        else if (n == 3) cout << "6\n";
        else {
            Matrix a;
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++)
                    a.f[i][j] = 0;

            a.f[0][0] = a.f[0][1] = a.f[0][2] = a.f[0][3] = 1;
            a.f[1][1] = a.f[1][2] = a.f[1][3] = 1;
            a.f[2][1] = 1;
            a.f[3][2] = 1;

            a = powerMod(a, n - 3);
           ll ans = 0;
            for(int i = 0; i < 4; ++i) ans = (ans + mulNumber(a.f[0][i], x[i])) % MOD;
            cout << ans << endl;
        }
    }
}
