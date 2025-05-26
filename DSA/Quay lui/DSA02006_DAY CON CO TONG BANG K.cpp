#include<bits/stdc++.h>

using namespace std;

int n, s, x[101], a[101];
int min_size;

void print(int i){
    if (i < min_size){
        min_size = i;
    }
    cout << "[";
    for (int l = 1; l <= i; l++){
        cout << x[l];
        if (l != i){
            cout << " "; 
        }
    }
    cout << "] ";
}

void Try(int i, int pos, int sum){
    for (int j = pos; j <= n; j++){
        if (sum + a[j] <= s){
            x[i] = a[j];
            if (sum + a[j] == s){
                print(i);
            } 
            else{
                Try(i + 1, j + 1, sum + a[j]);
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >> n >> s;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        min_size = 1e9;  
        Try(1, 1, 0);
        if (min_size == 1e9){
            cout << "-1"; 
        }
        cout << endl;
    }
}
