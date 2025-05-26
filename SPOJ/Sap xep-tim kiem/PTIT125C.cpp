#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n, {0, 0});
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        a[x].first++;
        a[y].second++;
    }
    int s = 0;
    vector<int> list;
    for(int i = 0; i < n; i++){
        s += a[i].first;
        list.push_back(s);
        s -= a[i].second;
    }
    sort(list.begin(), list.end());
    cout << list[(list.size() - 1) / 2];
    
}