#include<bits/stdc++.h>

using namespace std;

void leftSmaller(int a[], int n, int l[]){
    stack<int> st;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        while(!st.empty() && a[i] >= a[st.top()]){
            st.pop();
        }
        if(st.empty()) l[i] = i + 1;
        else l[i] = i - st.top();
        st.push(i);
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
        int l[n];
        leftSmaller(a, n, l);
        for(int i = 0; i < n; i++){
            cout << l[i] << " ";
        }
        cout << endl;
    }
}