#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int K[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> K[i][j];
            }
        }
        ll sum = 0;
        for(int i = 0; i <= n - 3; i++){
            for(int j = 0; j <= m - 3; j++){
                for(int l = 0; l < 3; l++){
                    for(int q = 0; q < 3; q++){
                        sum += a[i + l][j + q] * K[l][q];
                    }
                }
            }
        }
        cout << sum << endl;
    }
}
