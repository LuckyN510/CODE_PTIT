#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, p; cin >> n >> p;
        int i = 1;
        int cnt = 0, tmp = 0;
        while(p * i <= n){
            tmp = p * i;
            while(tmp % p == 0){
                tmp /= p;
                ++cnt;
            }
            ++i;
        }
        cout << cnt << endl;
    }
}