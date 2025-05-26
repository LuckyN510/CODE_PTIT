#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isNumber(const string &s) {
    if (s.empty()) return false;
    if (s[0] == '-' && s.size() > 1) return all_of(s.begin() + 1, s.end(), ::isdigit);
    return all_of(s.begin(), s.end(), ::isdigit);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        stack<ll> st;

        if (!isNumber(s[0])) { // prefix
            for (int i = n - 1; i >= 0; i--) {
                if (isNumber(s[i])) {
                    st.push(stoll(s[i]));
                } else {
                    ll u1 = st.top(); st.pop();
                    ll u2 = st.top(); st.pop();
                    if (s[i] == "+") st.push(u1 + u2);
                    else if (s[i] == "-") st.push(u1 - u2);
                    else if (s[i] == "*") st.push(u1 * u2);
                    else if (s[i] == "/") st.push(u1 / u2);
                }
            }
            cout << st.top() << endl;
        } else { // postfix
            for (int i = 0; i < n; i++) {
                if (isNumber(s[i])) {
                    st.push(stoll(s[i]));
                } else {
                    ll u1 = st.top(); st.pop();
                    ll u2 = st.top(); st.pop();
                    if (s[i] == "+") st.push(u2 + u1);
                    else if (s[i] == "-") st.push(u2 - u1);
                    else if (s[i] == "*") st.push(u2 * u1);
                    else if (s[i] == "/") st.push(u2 / u1);
                }
            }
            cout << st.top() << endl;
        }
    }
}
