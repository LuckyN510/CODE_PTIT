#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll fON(ll a){
    if(a % 4 == 0) return a;
    if(a % 4 == 1) return 1;
    if(a % 4 == 2) return a + 1;
    return 0;
}

int main(){
    ll a, b;
    cin >> a >> b;
    cout << (fON(b) ^ fON(a - 1));
}