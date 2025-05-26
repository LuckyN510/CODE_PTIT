#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v;

void sinh() {
    queue<ll> q;
    q.push(4);
    q.push(7);
    while (!q.empty()) {
        ll tmp = q.front(); q.pop();
        if (tmp > 1e10) break;
        v.push_back(tmp);
        q.push(tmp * 10 + 4);
        q.push(tmp * 10 + 7);
    }
    sort(v.begin(), v.end()); 
}

ll Search(vector<ll>& a, ll x) {
    int l = 0, r = a.size() - 1;
    ll res = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] >= x) {
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

int main() {
    sinh();
    int l, r; cin >> l >> r;
    ll sum = 0;
    vector<ll> res;
    for(ll i = l; i <= r; i++){
        ll k = Search(v, i);
        res.push_back(1ll * v[k]);
    }
    for(ll it : res){
        sum += it;
    }
        cout << sum;
    
}
