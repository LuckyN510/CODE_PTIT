#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        queue<ll> q;
        vector<ll> v;
        q.push(1);
        while(true){
            ll top = q.front();
            q.pop();
            if(top >= 1e18){
                break;
            }
            v.push_back(top);
            q.push(top * 10);
            q.push(top * 10 + 1);
        }
        int cnt = 0;
        for(ll x : v){
            if(x <= n){
                ++cnt;
            }
            else{
                break;
            }
        }
        cout << cnt << endl;
    }
}