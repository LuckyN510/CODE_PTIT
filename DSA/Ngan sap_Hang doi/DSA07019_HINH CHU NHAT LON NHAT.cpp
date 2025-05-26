#include<bits/stdc++.h>

using namespace std;
using ll = long long;

void leftSmaller(int a[], int n, int l[]){
    stack<int> st;
    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && a[i] < a[st.top()]){
            l[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        l[st.top()] = -1;
        st.pop();
    }
}

void rightSmaller(int a[], int n, int r[]){
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && a[i] < a[st.top()]){
            r[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        r[st.top()] = n;
        st.pop();
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int l[n], r[n];
        leftSmaller(a, n, l);
        rightSmaller(a, n, r);
        ll res = 0;
        for(int i = 0; i < n; i++){
            int chieuRong = r[i] - l[i] - 1;
            ll s = 1ll * chieuRong * a[i];
            res = max(s, res);
        }
        cout << res << endl;
    }
}