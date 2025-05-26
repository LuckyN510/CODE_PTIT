#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dp[n]; // là độ dài dãy con tăng dài nhất kết thúc tại a[i]
    for(int i = 0; i < n; i++){
        dp[i] = 0;
    }
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]){
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    cout << *max_element(dp, dp + n);
}