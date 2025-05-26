#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        pair<int, int> a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a, a + n);
        int res = -1; 
        int tmp = a[0].first, preMin = a[0].second;
        for(int i = 1; i < n; i++){
            if(a[i].first > tmp){
                res = max(res, a[i].second - preMin);
            }
            if(a[i].second < preMin){
                preMin = a[i].second;
                tmp = a[i].first;
            }
        } 
        cout << res << endl;
    }
}
