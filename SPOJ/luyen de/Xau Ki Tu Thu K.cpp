#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int C[61][61];
int a, b, k;

void Find(int a, int b, int k, string &res){
    cout << res << endl;
    if(a == 0){
        res.append(b, 'b'); // + them b ki tu b
        return;
    }
    if(b == 0){
        res.append(a, 'a');
        return;
    }
    ll startWithA = C[a + b - 1][a - 1]; // so chuoi bat dau bang ki tu a
    cout << "bat dau A : " << k << " " << startWithA << " " << endl;
    if(k <= startWithA){
        res += 'a';
        Find(a - 1, b, k, res);
    }
    else{
        res += 'b';
        Find(a, b - 1, k - startWithA, res);
    }
}

int main(){
    for(int i = 0; i <= 60; i++){
        for(int j = 0; j <= min(i, 30); j++){
            if(j == i || j == 0){
                C[i][j] = 1;
            }
            else if(j == 1 || j == i - 1){
                C[i][j] = i;
            }
            else{
                C[i][j] = C[i - 1][j] + C[i - 1][j -  1];
            }
        }
    }  
    cin >> a >> b >> k;
    string res = "";
    Find(a, b, k, res);
    cout << res << endl;
}