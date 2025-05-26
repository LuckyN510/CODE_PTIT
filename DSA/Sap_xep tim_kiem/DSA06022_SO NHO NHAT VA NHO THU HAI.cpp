#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        set<int> se;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        if(se.size() < 2){
            cout << "-1\n";
        }
        else{
            auto it = se.begin();
            cout << *it << " ";
            ++it;
            cout << *it << " ";
        }
        cout << endl;
    }
}