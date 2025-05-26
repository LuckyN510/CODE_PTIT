#include<bits/stdc++.h>

using namespace std;
int n, a[101], x[101];
vector<string> v;

void in(int i){
    string s = "";
    for(int j = 1; j <= i; j++){
        s += to_string(x[j]) + " ";
    }
    v.push_back(s);
}

void Try(int i, int pos){
    for(int j = pos; j <= n; j++){
        if(a[j] > x[i - 1]){
            x[i] = a[j];
            if(i >= 2){
                in(i);
            }
            Try(i + 1, j + 1);
        }
    }
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    x[0] = 0;
    Try(1, 1);
    sort(v.begin(), v.end());
    for(string it : v){
        cout << it << endl;
    }
}