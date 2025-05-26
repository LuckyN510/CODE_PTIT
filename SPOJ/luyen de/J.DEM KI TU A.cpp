#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[51];
ll countA[51];

void init(){
    F[0] = 1;
    F[1] = 1;
    countA[0] = 1;
    countA[1] = 0;
    for(int i = 2; i <= 50; i++){
        F[i] = F[i - 1] + F[i - 2];
        countA[i] = countA[i - 1] + countA[i - 2];
    }
}

ll FindA(int n, ll k){
    if(n == 0) return 1;
    else if(n == 1) return 0;
    if(k <= F[n - 1]){
        return FindA(n - 1, k);
    }
    return countA[n - 1] + FindA(n - 2, k - F[n - 1]);
}

int main(){
    init();
    int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        cout << FindA(n, k) << endl;
    }

}