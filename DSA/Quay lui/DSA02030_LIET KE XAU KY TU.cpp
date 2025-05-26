#include <bits/stdc++.h>

using namespace std;

char c;
int n;
int len;
int x[101];

void in(){
    for(int i = 1; i <= n; i++){
        cout << char('A' + x[i] - 1); 
    }
    cout << endl;
}

void Try(int i, int pos){
    for (int j = pos; j <= len; j++){
        x[i] = j;
        if (i == n){
            in();
        } 
        else{
            Try(i + 1, j);
        }
    }
}

int main(){
    cin >> c >> n;
    len = c - 'A' + 1; 
    Try(1, 1);
}
