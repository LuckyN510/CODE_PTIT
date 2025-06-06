#include<bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(isPrime(i)){
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
}