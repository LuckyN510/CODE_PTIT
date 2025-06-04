#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int q; cin >> q;
    while(q--){
        char c;
        cin >> c;
        if(c == 'q'){
            int l, r;
            cin >> l >> r;
            l--; r--;
            string t = s.substr(l, r - l + 1);
            string t1 = t;
            reverse(t.begin(), t.end());
            if(t == t1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(c == 'c'){
            int u; 
            char x;
            cin >> u >> x;
            s[u - 1] = x; 
        }
        
    }
}