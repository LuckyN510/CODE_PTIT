#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("1");
        vector<string> v;
        while(v.size() < n){
            string front = q.front();
            v.push_back(front);
            q.pop();
            q.push(front + '0');
            q.push(front + '1');
        }
        for(string x : v){
            cout << x << " ";
        }
        cout << endl;
    }
}