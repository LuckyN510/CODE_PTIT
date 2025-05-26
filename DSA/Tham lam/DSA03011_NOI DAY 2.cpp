#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            pq.push(a[i]);
        }
        ll sum = 0;
        while(pq.size() > 1){
            int u = pq.top(); pq.pop();
            int v = pq.top(); pq.pop();
            ll tmp = u + v;
            tmp %= mod;
            sum += tmp;
            sum %= mod;
            pq.push(tmp);
        }
        cout << sum << endl;

    }
}