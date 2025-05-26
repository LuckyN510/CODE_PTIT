#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<pair<string, int>> q;
        q.push({"9", 9 % n});
        set<int> visited;
        while(true){
            auto top = q.front(); q.pop();
            string tmp = top.first;
            int rem = top.second;
            if(rem == 0){
                cout << tmp << endl;
                break;
            }
            if(visited.count(rem)) continue;
            visited.insert(rem);
            q.push({tmp + "0", (rem * 10) % n});
            q.push({tmp + "9", (rem * 10 + 9) % n});
        }
    }
}