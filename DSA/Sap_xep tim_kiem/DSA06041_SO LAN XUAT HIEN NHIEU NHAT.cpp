#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int m = n / 2;
        int max_fre = 0;
        int num = 0;
        for(auto x : mp){
            if(max_fre < x.second){
                    max_fre = x.second;
                    num = x.first;
            }
        }
        if(max_fre <= m) cout <<"NO"<<endl;
        else cout << num << endl;
    }
}