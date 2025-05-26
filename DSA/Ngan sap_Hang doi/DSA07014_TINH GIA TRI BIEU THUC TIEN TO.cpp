#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<ll> st;
        for(int i = s.length() - 1; i >= 0; i--){
            if(isdigit(s[i])){
                st.push(s[i] - '0');
            }
            else{
                ll top1 = st.top(); st.pop();
                ll top2 = st.top(); st.pop();
                if(s[i] == '+') st.push(top1 + top2);
                else if(s[i] == '-') st.push(top1 - top2);
                else if(s[i] == '*')  st.push(top1 * top2);
                else if(s[i] == '/') st.push(top1/top2);
            }
        }
        cout << st.top() << endl;
    }
}