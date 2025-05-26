#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll convert_10(string s, int k){
    ll res = 0;
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++){
        res += (s[i] - '0') * pow(k, i);
    }
    return res;
}

void convert_k(ll n, int k){
    if(n == 0){
        return ;
    }
    convert_k(n / k, k);
    cout << n % k;
}

int main(){
    int t; cin >> t;
    while(t--){
        int k;
        string a, b;
        cin >> k >> a >> b;
        convert_k(convert_10(a, k) + convert_10(b, k), k);
        cout << endl;
    }
    return 0;
}