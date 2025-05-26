#include<bits/stdc++.h>

using namespace std;
//4x + 7y = sum -> y = (sum - 4x)/7 nho nhat khi y = 0, x = sum/4
int main(){
    int t; cin >> t;
    while(t--){
        int s; cin >> s;
        int d4 = -1, d7 = -1;
        for(int x = 0; x <= s / 4; x++){
            if((s - 4 * x) % 7 == 0){
                d4 = x;
                d7 = (s - 4 * x) / 7;
                break;
            }
        }
        if(d4 != -1 && d7 != -1){
            for(int i = 0; i < d4; i++){
                cout << "4";
            }
            for(int i = 0; i < d7; i++){
                cout << "7";
            }
        }
        else cout << -1;
        cout << endl;
    }
}