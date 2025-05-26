#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[101];

void init(){
    F[1] = 1;
    F[2] = 1;
    for(int i = 3; i <= 93; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

char fibo(ll n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2]) return fibo(n - 2, k);
    return fibo(n - 1, k - F[n - 2]);
    
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << fibo(n, k) << endl;
    }
}