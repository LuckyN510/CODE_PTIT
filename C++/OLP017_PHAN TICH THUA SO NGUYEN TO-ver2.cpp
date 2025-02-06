#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX = 10000000; 
bool Prime[MAX + 1];
vector<int> primes;

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
            primes.push_back(i);
        }
    }
}

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<pair<ll, int>> v;
        for(int x : primes){
            if(n % x == 0){
                int cnt = 0;
                while(n % x == 0){
                    ++cnt;
                    n /= x;
                }
                v.push_back({x, cnt});
            }
        }
        if(n > 1) v.push_back({n, 1});
        for (auto x : v) {
            cout << x.first << ' ' << x.second << endl;
        }
    }
}