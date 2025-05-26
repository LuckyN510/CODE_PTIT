#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("6");
        q.push("8");
        vector<string> v;
        while(1){
            string tmp = q.front(); q.pop();
            if(tmp.length() > n) break;
            v.push_back(tmp);
            q.push(tmp + "6");
            q.push(tmp + "8");
        }
        cout << v.size() << endl;
        for(string it : v){
            cout << it << " ";
        }
        cout << endl;
    }
}