#include<bits/stdc++.h>

using namespace std;

void nextGreater(int a[], int n, int d[]){
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] > a[st.top()]) { 
            d[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        d[st.top()] = -1;
        st.pop();
    }
}

void rightSmaller(int a[], int n, int d[]){
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] < a[st.top()]) { 
            d[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        d[st.top()] = -1;
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
        int d[n], r[n];
        nextGreater(a, n, d);
        rightSmaller(a, n, r);
        for(int i = 0; i < n; i++){
            cout << a[r[d[i]]] << " ";
        }
        cout << endl;

    }
}