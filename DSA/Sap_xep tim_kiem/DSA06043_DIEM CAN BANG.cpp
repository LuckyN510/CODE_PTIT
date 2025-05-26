#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int index = 1;
        bool check = false;
        int sum1 = 0;
        for(int i = 0; i < n; i++){
            int sum2 = sum - sum1 - a[i];
            if(sum1 != sum2){
                sum1 += a[i];
            } 
            else{
                cout << i + 1 << endl;
                check = true;
                break;
            }

        }
        if(!check)
            cout << "-1" << endl;
    }
}