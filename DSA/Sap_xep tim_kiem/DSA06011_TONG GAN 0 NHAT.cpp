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
        int maxVal = -1e9;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(abs(maxVal) > abs(a[i] + a[j])){
                    maxVal = a[i] + a[j];
                }
            }
        }
        cout << maxVal<< endl;
    }
}