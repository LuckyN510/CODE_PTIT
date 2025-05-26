#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> a;
set<string> res;

void Try(int pos, string current) {
    for (int i = pos; i < n; ++i) {
        string next = current + a[i];
        res.insert(next);
        Try(i + 1, next);
    }
}

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    Try(0, "");
    for (const string& s : res) {
        cout << s << '\n';
    }
    return 0;
}
