#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int check = 1;
        for(int i = 1; i < n; i++){
            if(a[i - 1] >= a[i]){
                check = 0;
            }
        }
        cout << check << endl;
    }
}