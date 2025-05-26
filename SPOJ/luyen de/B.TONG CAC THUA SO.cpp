#include<bits/stdc++.h>

using namespace std;
using ll = long long;

const ll maxn = 1000005;

vector<int> sieve(int limit){
    vector<int> primes(limit + 1);
    for(int i = 2; i <= limit; i++){
        primes[i] = i;
    }
    for(int i = 2; i <= sqrt(limit); i++){
        if(primes[i] == i){
            for(int j = i * i; j <= limit; j += i){
                primes[j] = i;
            }
        }
    }
    for(int i = 2; i <= limit; i++){
        if(primes[i] == i) continue;;
        int max1 = i / primes[i];
        primes[i] = max(primes[i], primes[max1]);
    }
    return primes;
}


int main(){
    int t; cin >> t;
    vector<int> v = sieve(maxn);
    vector<ll> prefix(maxn + 1);
    for(int i = 1; i <= maxn; i++){
        prefix[i] = prefix[i - 1] + v[i];
    }
    while(t--){
        int l, r;
        cin >> l >> r;
        if(l == 0){
            cout << prefix[r] << endl;
        }
        else{
            cout << prefix[r] - prefix[l - 1] << endl;
        }
    }
}