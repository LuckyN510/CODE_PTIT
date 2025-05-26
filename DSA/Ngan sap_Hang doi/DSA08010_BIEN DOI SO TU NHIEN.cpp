#include<bits/stdc++.h>

using namespace std;

int BFS(int n){
    queue<pair<int, int>> q;
    q.push({0, n});
    set<int> se;
    se.insert(n);
    while(!q.empty()){
        auto it = q.front(); q.pop();
        if(it.second == 1) return it.first;
        if(it.second > 1 && !se.count(it.second - 1)){
            q.push({it.first + 1, it.second - 1});
        }
        int tmp = it.second;
        for(int i = 2; i <= sqrt(tmp); i++){
            if(tmp % i == 0){
                int u = tmp / i, v = i;
                int maxn = max(u, v);
                if(!se.count(maxn)){
                    q.push({it.first + 1, maxn});
                    se.insert(maxn);
                }
            }
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << BFS(n) << endl;
    }
}