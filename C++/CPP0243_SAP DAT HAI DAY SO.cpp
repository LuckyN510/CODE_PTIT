#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < m; i++) {
            if(mp[b[i]] != 0) {
                for(int j = 0; j < mp[b[i]]; j++) {
                    cout << b[i] << ' ';
                }
                mp[b[i]] = 0;
            }
        }
        for(int i = 0; i < n; i++) {
            if(mp[a[i]] != 0) {
                cout << a[i] << ' ';
                mp[a[i]]--;
            }
        }
        cout << endl;
    }
    return 0;
}
