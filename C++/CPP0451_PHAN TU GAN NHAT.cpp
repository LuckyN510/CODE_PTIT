#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int k, x, l, r; // k la co chan
        cin >> k >> x;
        sort(a.begin(), a.end());
        int m = lower_bound(a.begin(), a.end(), x) - a.begin();
        if(a[m] == x){
            l = m - 1;  //dich vi tri cua m sang trai 1dv
            r = m + 1;  //dich vi tri cua m sang phai 1dv
        }   
        else{
            l = m - 1;
            r = m;
        }
        for(int i = k / 2 - 1; i >= 0; i--){
            cout << a[l - i] << " ";
        }
        for(int i = 0; i < k / 2; i++){
            cout << a[r + i] << " ";
        }
        cout << endl;
    }
}