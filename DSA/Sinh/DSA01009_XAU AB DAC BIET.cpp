#include<bits/stdc++.h>

using namespace std;

int n, k;
char x[101];
vector<string> v;

bool check(string s){
    int cnt = 0, dem = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A') ++cnt;
        else cnt = 0;
        if(cnt > k) return false;
        if(cnt == k){
            dem++;
        }
    }
    return dem == 1;
}

void in(){
    string s = "";
    for(int i = 1; i <= n; i++){
        if(x[i] == 0) s += 'A';
        else s += 'B';
    }
    if(check(s)){
        v.push_back(s);
    }
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        x[i] = j;
        if(i == n){
            in();
        }
        else Try(i + 1);
    }
}

int main(){
    cin >> n >> k;
    Try(1);
    cout << v.size() << endl;
    for(auto x : v){
       cout << x << endl;
    }
}