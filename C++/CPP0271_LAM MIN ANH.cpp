#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, l;
    cin >> n >> m >> l;
    int a[n][m];
    double Kernel[l][l];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            Kernel[i][j] = 0.04;
        }
    }
    
    
}