#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
int bit[MAX];

void update(int i) {
    while (i < MAX) {
        bit[i]++;
        i += i & (-i);
    }
}

int get(int i) {
    int sum = 0;
    while (i > 0) {
        sum += bit[i];
        i -= i & (-i);
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    stack<int> st;
    long long ans = 0;

    for (int i = n; i >= 1; i--) {
        if (a[i] % 2 == 0) {
            ans += get(a[i] - 1);
            st.push(a[i]);
        } else {
            while (!st.empty()) {
                update(st.top());
                st.pop();
            }
        }
    }

    cout << ans << "\n";

    return 0;
}
