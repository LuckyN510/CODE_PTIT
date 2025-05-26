#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string t = s;
        reverse(t.begin(), t.end());
        do{
            cout << s << " ";
            if(s == t){
                break;
            }
        }while(next_permutation(s.begin(), s.end()));
        cout << endl;
    }
}