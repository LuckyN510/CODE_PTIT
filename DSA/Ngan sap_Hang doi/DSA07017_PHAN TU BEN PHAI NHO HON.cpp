#include<bits/stdc++.h>

using namespace std;

void nextGreater(int a[], int n, int tmp1[]){
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && a[i] > a[st.top()]){
            tmp1[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        tmp1[st.top()] = -1;
        st.pop();
    }
}


void rightSmaller(int a[], int n, int tmp2[]){
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && a[i] < a[st.top()]){
            tmp2[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        tmp2[st.top()] = -1;
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
        int tmp1[n];
        nextGreater(a, n, tmp1);
        int tmp2[n];
        rightSmaller(a, n, tmp2);
        for(int i = 0; i < n; i++){
            if(tmp1[i] != -1 && tmp2[tmp1[i]] != -1){
                cout << a[tmp2[tmp1[i]]] << " ";
            }
            else{
                cout << "-1 ";
            }
        }
        cout << endl;
    }
}