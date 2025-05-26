#include<bits/stdc++.h>

using namespace std;
int n, x[21];

void in(){
    cout << x[1];
    for(int i = 2; i <= n; i++){
        int res = x[i] ^ x[i - 1];
        cout << res;
    }
    cout << endl;
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
    cin >> n;
    Try(1);
        
}