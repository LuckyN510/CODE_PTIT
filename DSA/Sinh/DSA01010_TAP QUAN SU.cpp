#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k + 1], b[k + 1];
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        int i = k;
        while(i >= 1 && a[i] == n - k + i){
            --i;
        }
        if(i == 0){
            cout << k << endl;
        }
        else{
            a[i]++;
            for(int j = i + 1; j <= k; j++){
                a[j] = a[j - 1] + 1;
            }
            int cnt = 0;
            for(int i = 1; i <= k; i++){
                for(int j = 1; j <= k; j++){
                    if(a[i] == b[j]){
                        ++cnt;
                    }
                }
            }
            cout << k - cnt << endl;
        }
    }
}