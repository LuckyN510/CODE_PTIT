#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--) {
        ll n, k; 
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        ll dem = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > k) break;
            for(int j = i + 1; j < n; j++){
                auto tmp = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
                dem += tmp - j - 1;
            }
        }
        cout << dem << endl;
    }
}