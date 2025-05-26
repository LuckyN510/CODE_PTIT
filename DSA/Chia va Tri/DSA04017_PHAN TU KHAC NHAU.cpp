#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n - 1];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++){
            cin >> b[i];
        }
        int i = 0, j = 0;
        int pos = 0;
        while(i < n && j < n - 1){
            if(a[i] == b[j]){
                ++i;
                ++j;
            }
            else{
                pos = i;
                break;
            }
        }
        cout << pos + 1 << endl;
    }
}