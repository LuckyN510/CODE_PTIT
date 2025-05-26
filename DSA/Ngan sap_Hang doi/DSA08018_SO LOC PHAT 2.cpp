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
        while(true){
            string top = q.front(); q.pop();
            if(top.size() > n){
                break;
            }
            v.push_back(top);
            q.push(top + "6");
            q.push(top + "8");
        }
        cout << v.size() << endl;
        for(string x : v){
            cout << x << " ";
        }
        cout << endl;
    }
}