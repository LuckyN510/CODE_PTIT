#include<bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> v;
vector<string> res;

ll calc(ll a, ll b, string c){
    if(c == "+") return a + b;
    if(c == "-") return a - b;
    if(c == "*") return a * b;
    if(c == "/") return a / b;
    return 0; 
}

int pre(string c){
    if(c == "+" || c == "-") return 1;
    if(c == "*" || c == "/") return 2;
    return 0;
}

void solve(){
    stack<string> st;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == "("){
            st.push(v[i]);
        }
        else if(v[i] == ")"){
            while(!st.empty() && st.top() != "("){
                res.push_back(st.top());
                st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else if(v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/"){
            while(!st.empty() && pre(st.top()) >= pre(v[i])){
                res.push_back(st.top());
                st.pop();
            }
            st.push(v[i]);
        } 
        else{
            res.push_back(v[i]);
        }
    }
    while(!st.empty()){
        if(st.top() != "("){
            res.push_back(st.top());
            st.pop();
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        v.clear();
        res.clear();
        // Chuyển chuỗi thành mảng các ký tự và số
        int i = 0;
        while(i < s.length()){
            if(isdigit(s[i])){
                string a = "";
                while(i < s.length() && isdigit(s[i])){
                    a += s[i];
                    i++;
                }
                v.push_back(a);
            }
            else{
                v.push_back(string(1, s[i]));
                i++;
            }
        }
        solve();
        stack<ll> ans;
        for(int i = 0; i < res.size(); i++){
           if(res[i] == "+" || res[i] == "-" || res[i] == "*" || res[i] == "/"){
                ll b = ans.top(); ans.pop();
                ll a = ans.top(); ans.pop();
                ll c = calc(a, b, res[i]);
                ans.push(c);
            }
            else{
                ans.push(stoll(res[i]));
            }
        }
        cout << ans.top() << endl;
    }
}