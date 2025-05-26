#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        bool check = true;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i] && a[i] != b[n - i - 1]){
                check = false;
            }
        }
        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}