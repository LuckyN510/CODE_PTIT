#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n > 1;
}

bool increase(int n){
    int prev = n % 10;
    n /= 10;
    while(n != 0){
        int cur = n % 10;
        if(cur >= prev){
            return 0;
        }
        prev = cur;
        n /= 10;
    }
    return 1;
}


bool decrease(int n){
    int prev = n % 10;
    n /= 10;
    while(n != 0){
        int cur = n % 10;
        if(cur <= prev){
            return 0;
        }
        prev = cur;
        n /= 10;
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int minVal = pow(10, n - 1);
        int maxVal = pow(10, n);
        int cnt = 0;
        for(int i = minVal; i <= maxVal; i++){
            if(increase(i) || decrease(i)){
                if(isPrime(i))
                    ++cnt;
            }
        }
        cout << cnt << endl;
    }
}