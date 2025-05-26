#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int query; cin >> query;
        deque<int> q;
        while(query--){
            int n; cin >> n;
            if(n == 1){
                cout << q.size() << endl;
            }
            else if(n == 2){
                if(q.empty()) cout << "YES\n";
                else cout << "NO\n";
            }
            else if(n == 3){
                int m; cin >> m;
                q.push_back(m);
            }
            else if(n == 4){
                if(!q.empty()){
                    q.pop_front();
                }
            }
            else if(n == 5){
                if(!q.empty()){
                    cout << q.front() << endl;
                }
                else{
                    cout << "-1\n"; 
                }
            }
            else if(n == 6){
                if(!q.empty()){
                    cout << q.back() << endl;
                }
                else{
                    cout << "-1\n"; 
                }
            }
        }
    }
}