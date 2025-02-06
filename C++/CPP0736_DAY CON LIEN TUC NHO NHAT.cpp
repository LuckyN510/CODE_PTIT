#include<bits/stdc++.h>

using namespace std;

// sliding window
int minSubArrayLen(int a[], int n, int x){
    int min_len = n + 1;
    int start = 0, end = 0, cur_sum = 0;
    while(end < n){
        cur_sum += a[end++];
        while(cur_sum > x){
            min_len = min(min_len, end - start);
            cur_sum -= a[start++];
        }
    }
    if(min_len == n + 1) return -1;
    return min_len;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << minSubArrayLen(a, n, x) << endl;
    }
}