#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a[i] = 1ll * x * x;
        }
        sort(a.begin(), a.end());
        bool check = false;
        for(int i = 0; i < n - 1; i++){
            int cur = a[i];
            for(int j = i + 1; j < n; j++){
                if(binary_search(a.begin() + j + 1, a.end(), a[i] + a[j])){
                    check = true;
                    break;
                }
            }
            if(check) break;
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}