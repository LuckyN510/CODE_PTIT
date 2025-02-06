#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const int MAX = 10000000;

bool Prime[MAX + 1];
vector<int> v;

void sieve(){
    for(int i = 0; i <= MAX; i++){
        Prime[i] = 1;
    }
    Prime[0] = Prime[1] = 0;
    for(int i = 2; i <= sqrt(MAX); i++){
        if(Prime[i]){
            for(int j = i * i; j <= MAX; j += i){
                Prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= MAX; i++){
        if(Prime[i]){
            v.push_back(i);
        }
    }
}

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<pair<ll, int>> res;
        for(int i : v){
            if(n % i == 0){
                int cnt = 0;
                while(n % i == 0){
                    ++cnt;
                    n /= i;
                }
                res.push_back({i, cnt});
            }
        }
        if(n > 1) res.push_back({n, 1});
        for(pair<ll, int> it : res){
            cout << it.first << " " << it.second << endl;
        }
        cout << endl;
    }
}