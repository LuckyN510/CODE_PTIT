#include<bits/stdc++.h>

using namespace std;

void solve(string s){
    stack<string> st;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            st.push(string(1, s[i]));
        }
        else{
            string o1 = st.top(); st.pop();
            string o2 = st.top(); st.pop();
            string res = s[i] + o2 + o1 ;
            st.push(res);
        }
    }
    cout << st.top() << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        solve(s);
    }
}