#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> se;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            while(x != 0){
                int r = x % 10;
                se.insert(r);
                x /= 10;
            }
        }
        for(int it : se){
            cout << it << " ";
        }
        cout << endl;
    }
}