#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    long long res = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > 0){
            res += a[i] * 2;
        }
    }
    cout << res;
}
