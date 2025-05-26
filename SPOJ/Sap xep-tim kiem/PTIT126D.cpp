#include<bits/stdc++.h>

using namespace std;

int main(){
    int k; 
    int p[k + 1];
    while(1){
        cin >> k;
        if(k == 0) break;
        for(int i = 1; i <= k; i++){
            cin >> p[i];
        }
        for(int i = 1; i <= k; i++){
            if(i == 1){
                for(int j = 1; j <= p[i]; j++){
                    cout << 1 << " ";
                }
            }
            else{
                for(int j = 1; j <= p[i] - p[i - 1]; j++){
                    cout << i << " "; 
                }
            }
        }
        cout << endl;
    }
}