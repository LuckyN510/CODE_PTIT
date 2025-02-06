#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        while(true) {
            bool all_zero = true;
            for(int i = 0; i < n; i++) {
                if(a[i] % 2 != 0) {
                    a[i]--;
                    cnt++;
                }
            }
            for(int i = 0; i < n; i++) {
                a[i] /= 2;
            }  
            cnt++; 
            for(int i = 0; i < n; i++) {
                if(a[i] != 0) {
                    all_zero = false;
                    break;
                }
            }
            if(all_zero) {
                break;
            }
        }
        cout << cnt - 1 << endl;
    }
}
