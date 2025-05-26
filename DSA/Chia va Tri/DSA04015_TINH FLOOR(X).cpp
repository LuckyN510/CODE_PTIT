#include<bits/stdc++.h>

using namespace std;

int search(int a[], int n, int x){
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r){
        int m = (l + r)/2;
        if(x >= a[m]){
            res = m + 1; // chi so bd tu 1
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << search(a, n, x) << endl;
    }
}