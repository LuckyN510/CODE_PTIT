#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int minU = 50005, minD = 50005;
    int sumU = 0, sumD = 0;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        sumU += x;
        sumD += y;
        minU = min(minU, x);
        minD = min(minD, y);
    }
    sumU += minD;
    sumD += minU;
    if(sumU < sumD){
        cout << sumD;
    }
    else{
        cout << sumU;
    }
}