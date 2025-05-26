#include <bits/stdc++.h>

using namespace std;

int n, k, idx = 0;
vector<int> x(1001), b(1001);

void in(){
    for(int i = 1; i <= k; i++){
        cout << b[x[i]] << " ";
    }
    cout << endl;
}

void Try(int i){
    for (int j = x[i - 1] + 1; j <= idx - k + i; j++){
        x[i] = j;
        if (i == k){
            in();
        } 
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    set<int> se;
    for(int i = 0; i < n; i++){
        int val; 
        cin >> val;
        se.insert(val);
    }

    for (int it : se){
        b[++idx] = it;
    }
    Try(1);
}
