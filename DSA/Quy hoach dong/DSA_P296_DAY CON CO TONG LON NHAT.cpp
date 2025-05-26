#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int pre[n];
    pre[0] = max(0, a[0]);
    for(int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + max(0, a[i]);
    }
    while(q--){
        int l, r; cin >> l >> r;
        l--;
        r--;
        if(l == 0){
            cout << pre[r] << endl;
        }
        else{ 
            cout << pre[r] - pre[l - 1] << endl;
        }
    }
}
