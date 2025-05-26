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
            if(top % n == 0){
                cout << top << endl;
                break;
            }
            v.push_back(top);
            q.push(top * 10);
            q.push(top * 10 + 1);
        }
    }
}