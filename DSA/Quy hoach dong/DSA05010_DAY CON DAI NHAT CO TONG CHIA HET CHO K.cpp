#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> dp(n + 1, 0);
        for(int i = 0; i < n; i++){
            dp[i] = a[i];
            for(int j = 0; j < i; j++){
                if(a[i] > a[j])
            }

        }
    }
}