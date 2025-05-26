#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        int i = 0, j = n / 2;
        int cnt = 0;
        while(i < n / 2 && j < n){
            if(a[i] >= 2 * a[j]){
                ++cnt;
                ++i;
                ++j;
            }
            else ++j;
        }
        cout << n - cnt << endl;
    }
}