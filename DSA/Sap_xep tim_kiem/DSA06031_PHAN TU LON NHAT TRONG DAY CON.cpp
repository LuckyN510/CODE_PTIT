#include<bits/stdc++.h>

using namespace std;

int solve(int a[], int l, int r){
    int maxVal = -1e9;
    for(int i = l; i <= r; i++){
        maxVal = max(a[i], maxVal);
    }
    return maxVal;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i <= n - k; i++){
            cout << solve(a, i, i + k - 1) << " ";
        }
        cout << endl;
    }
}