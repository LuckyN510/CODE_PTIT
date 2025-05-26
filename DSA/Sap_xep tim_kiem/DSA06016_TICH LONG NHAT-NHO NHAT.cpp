#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >>m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(b, b + n);
        sort(a, a + n, greater<>());
        cout << (long long)(a[0] * b[0]) << endl;
    }
}