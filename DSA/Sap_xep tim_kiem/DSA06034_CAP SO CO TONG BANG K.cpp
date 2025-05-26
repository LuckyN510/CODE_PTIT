#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k; cin >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        long long dem = 0;
        int i = 0;
        auto r = lower_bound(a + i + 1, a + n, k - a[i]);
        auto l = upper_bound(a + i + 1, a + n, k - a[i]);
        cout << l - r << endl;
        // for(int i = 0; i < n; i++){
        //     auto r = lower_bound(a + i + 1, a + n, k - a[i]);
        //     auto l = upper_bound(a + i + 1, a + n, k - a[i]);
        //     dem += l - r;
        // }
        cout << dem << endl;
    }
}