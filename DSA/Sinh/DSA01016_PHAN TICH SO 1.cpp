#include<bits/stdc++.h>

using namespace std;

int n, x[101];

void in(int i){
    cout << "(";
    for(int j = 1; j <= i; j++){
        cout << x[j];
        if(j < i){
            cout << " ";
        }
    }
    cout << ") ";
}

void Try(int i, int pos, int sum){
    for(int j = pos; j >= 1; j--){
        if(sum + j <= n){
            x[i] = j;
            if(sum + j == n){
                in(i);
            }
            else Try(i + 1, j, sum + j);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1, n, 0);
        cout << endl;      
    }
}