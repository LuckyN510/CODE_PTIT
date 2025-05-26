#include <bits/stdc++.h>
using namespace std;

bool checkDoiXung(const string& s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s; 
    cin >> s;
    int q; 
    cin >> q;
    while (q--) {
        char m; 
        cin >> m;
        if (m == 'q') {
            int x, y;
            cin >> x >> y;
            if (checkDoiXung(s, x, y)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (m == 'c') {
            char x, y;
            cin >> x >> y;
            for (char& ch : s) {
                if (ch == x) ch = y;
            }
        }
    }
    return 0;
}
