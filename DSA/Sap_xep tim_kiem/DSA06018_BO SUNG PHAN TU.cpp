#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        unordered_map<int, int> cnt;
        int l = -1e9, r = 1e9;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            l = max(l, a[i]);
            r = min(r, a[i]);
            cnt[a[i]]++;
        }
        int dem = 0;
        for(int i = r; i <= l; i++){
            if(cnt[i] == 0){
                ++dem;
            }
        }
        cout << dem << endl;
    }
}