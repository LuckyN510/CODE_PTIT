#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        queue<pair<int, int>> q;
        q.push({0, n});
        set<int> se;
        se.insert(n);
        while (!q.empty()) {
            auto top = q.front(); q.pop();
            int step = top.first;
            int cur_num = top.second;
            if (cur_num == 1) {
                cout << step << endl;  
                break;
            }
            if (cur_num % 2 == 0 && !se.count(cur_num / 2)){
                q.push({step + 1, cur_num / 2});
                se.insert(cur_num / 2);
            }
            if (cur_num % 3 == 0 && !se.count(cur_num / 3)){
                q.push({step + 1, cur_num / 3});
                se.insert(cur_num / 3);
            }
            if (!se.count(cur_num - 1)){
                q.push({step + 1, cur_num - 1});
                se.insert(cur_num - 1);
            }
        }
    }
}
