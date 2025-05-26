#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(binary_search(a.begin(), a.end(), x)){
            cout << "1\n";
        }
        else cout << "-1\n";
    }
}