#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<ll> v;
void ktao(){
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    pq.push(1);
    set<ll> se;
    se.insert(1);
    while(v.size() < 1e4){
        ll top = pq.top(); pq.pop();
        v.push_back(top);
        ll x[] = {2, 3, 5};
        for (ll it : x) {
            ll next = top * it;
            if(!se.count(next)){ 
                pq.push(next);
                se.insert(next);
            }
        }
    }
}

int main(){
    ktao();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << v[n - 1] << endl;
    }
}













































// vector<ll> v;
// void bfs() {
//     queue<ll> q;
//     set<ll> se;
//     q.push(1);
//     se.insert(1);
//     while (!q.empty()) {
//         ll top = q.front();
//         q.pop();
//         v.push_back(top);
//         if (top * 2 <= 1e8 && !se.count(top * 2)) {
//             q.push(top * 2);
//             se.insert(top * 2);
//         }
//         if (top * 3 <= 1e8 && !se.count(top * 3)) {
//             q.push(top * 3);
//             se.insert(top * 3);
//         }
//         if (top * 5 <= 1e8 && !se.count(top * 5)) {
//             q.push(top * 5);
//             se.insert(top * 5);
//         }
//     }
//     sort(v.begin(), v.end());
// }

// int main() {
//     bfs();
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         cout << v[n - 1] << endl;
//     }
// }
