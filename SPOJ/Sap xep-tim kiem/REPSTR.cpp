#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, s; 
    cin >> a >> s;
    int lenA = a.length();
    int lenS = s.length();
    int cnt[10] = {};
    for(auto it : s){
        cnt[it - '0']++;
    }
    for(int i = 0; i < lenA; i++){
        for(int j = 9; j > a[i] - '0'; j--){
            if(cnt[j] > 0){
                cnt[j]--;
                a[i] = j + '0';
                break; // mỗi vị trí chỉ đc replace đúng 1 lần
            }
        }
    }
    cout << a;
}   