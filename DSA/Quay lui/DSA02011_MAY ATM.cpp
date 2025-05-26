#include<bits/stdc++.h>

using namespace std;

int n, s, a[1001], x[1001], minValue = 1e9;

void in(int i){
    minValue = min(minValue, i);
}

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= s){
            x[i] = a[j];
            if(sum + a[j] == s){
                in(i);
            }
            else{
                Try(i + 1, j + 1, sum + a[j]);  
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        minValue = 1e9;
        sort(a + 1, a + n + 1);
        Try(1, 1, 0);
        if(minValue == 1e9){
            cout << -1;
        } 
        else {
            cout << minValue;
        }
        cout << endl;
    }
}