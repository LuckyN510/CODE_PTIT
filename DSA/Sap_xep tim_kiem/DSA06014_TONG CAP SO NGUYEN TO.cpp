#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int check = 0;
        for(int i = 2; i <= n / 2; i++){
            if(isPrime(i) && isPrime(n - i)){
                cout << i << " " << n - i << endl;;
                check = 1;
                break;
            }
        }
        if(!check) cout << "-1\n";
    }
}