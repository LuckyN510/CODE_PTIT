#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool found = false;
        cout << n << " ";
        if(!next_permutation(s.begin(), s.end())){
            cout << "BIGGEST\n";
        }
        else{
            cout << s << endl;
        }
    }
}
