#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue<string> q;
        q.push("9");
        while(true){
            string top = q.front();
            q.pop();
            if(stoi(top) % n == 0){
                cout << top << endl;
                break;
            }
            q.push(top + "0");
            q.push(top + "9");
        }
    }
}