#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long cnt = 0;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            int tmp = lower_bound(a.begin() + i + 1, a.end(), k + a[i]) - (a.begin() + i + 1);
            cnt += tmp;
        }
        cout << cnt << endl;
    }
}