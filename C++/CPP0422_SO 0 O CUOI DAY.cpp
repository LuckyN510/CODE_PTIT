#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0) ++cnt;
            else cout << a[i] << ' ';
        }
        while(cnt--)
        {
            cout << "0" <<' ';
        }
        cout << endl;
    }
}
