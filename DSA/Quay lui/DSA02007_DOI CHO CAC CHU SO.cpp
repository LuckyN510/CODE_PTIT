#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        for(int i = 0; i < s.length() && k > 0; i++){
            int max_idx = i;
            for(int j = s.length() - 1; j >= i; j--){
                if(s[j] > s[max_idx]){
                    max_idx = j;
                }
            }
            if(max_idx != i){
                swap(s[i], s[max_idx]);
                k--;
            }
        }
        cout << s << endl;
    }
}