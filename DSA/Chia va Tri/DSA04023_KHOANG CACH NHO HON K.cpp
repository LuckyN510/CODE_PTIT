#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        long long cnt = 0;
        for(int i = 0; i < n; i++){
            auto pos = lower_bound(a + i + 1, a + n, k + a[i]) - a;
            cnt += pos - i - 1;
        }
        cout << cnt << endl;
    }
}