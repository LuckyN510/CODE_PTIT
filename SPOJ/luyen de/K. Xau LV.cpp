#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll s[101];

void init(){
    s[1] = 1;
    s[2] = 1;
    for(int i = 3; i <= 100; i++){
        s[i] = s[i - 1] + 1 + s[i - 2];
    }
}

char Find(int n, ll k){
    if(n == 1) return 'L';
    if(n == 2) return 'V';
    ll left = s[n - 1];
    if(k <= left) return Find(n - 1, k);
    else if(k == left + 1){
        if(n % 2 == 0) return 'V';
        else return 'L';
    }
    else{
        return Find(n - 2, k - 1 - s[n - 1]);
    }
}

int main(){
    init();
    int t; cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >>k;
        cout << Find(n, k) << endl;
    }
}