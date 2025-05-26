#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        stack<ll> st;
        for(int i = 0; i < n; i++){
            if(isdigit(s[i].back())){
                st.push(stoll(s[i]));
            }
            else{
                ll u1 = st.top(); st.pop();
                ll u2 = st.top(); st.pop();
                if(s[i] == "+") st.push(u2 + u1);
                else if(s[i] == "-") st.push(u2 - u1);
                else if(s[i] == "*") st.push(u2 * u1);
                else st.push(u2 / u1);
            }
        }
        cout << st.top() << endl;
    }
}