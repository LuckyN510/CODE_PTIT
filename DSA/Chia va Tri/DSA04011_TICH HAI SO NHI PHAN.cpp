#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll convert_2(string a){
    ll res = 0;
    reverse(a.begin(), a.end());
    for(int i = 0; i < a.length(); i++){
        res += (a[i] - '0') * pow(2, i);
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << convert_2(a)*convert_2(b) << endl;
    }
}