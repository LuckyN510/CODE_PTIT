#include<bits/stdc++.h>

using namespace std;

int n;
char x[101];

void in(){
    for(int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << " ";
}

void Try(int i){
    for(char c = 'A'; c <= 'B'; c++){
        x[i] = c;
        if(i == n){
            in();
        }
        else Try(i + 1);
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