#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<string> a;
set<string> res;

void Try(int i, int pos, string s){
    for(int j = pos; j < n; j++){
        string next = s + a[j];
        if(i == k - 1){
            res.insert(next);
        }
        else{
            Try(i + 1, j + 1, next);
        }
    }
}

int main(){
    cin >> n >> k;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }   
    Try(0, 0, "");
    for(auto it : res){
        cout << it << endl;
    }
}