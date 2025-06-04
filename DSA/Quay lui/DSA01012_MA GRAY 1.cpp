#include<bits/stdc++.h>

using namespace std;

int n, x[101];

void in(){
    cout << x[1];
    for(int l = 2; l <= n; l++){
        cout << (x[l - 1]^x[l]);
    }
    cout << " ";
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            in();
        }
        else{
            Try(i + 1);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
}