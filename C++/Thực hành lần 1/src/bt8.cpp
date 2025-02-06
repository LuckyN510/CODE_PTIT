#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    pair<int, int> a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }   
    sort(a, a + n);
    ll totalCost = 0, cnt = 0;
    for(int i = 0; i < n; i++){
       while(cnt < m && a[i].second != 0){
            totalCost += a[i].first;
            a[i].second--;
            cnt++;
       }
    }
    cout << totalCost;

}