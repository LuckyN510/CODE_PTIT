#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            q.push(a[i]);
        }
        long long sum = 0;
        while(q.size() > 1){
            int u = q.top(); q.pop();
            int v = q.top(); q.pop();
            long long tmp = u + v;
            sum += tmp;
            q.push(u + v);
        }
        cout << sum << endl;
    }
}