#include<bits/stdc++.h>

using namespace std;
int n, k;
vector<string> v;
set<string> se;

void Try(int i, int pos, string sum){
    for(int j = pos; j < v.size(); j++){
        string tmp = sum + v[j];
        if(i == k - 1){
            se.insert(tmp);
        }
        else{
            Try(i + 1, j + 1, tmp);
        }
    }
}

int main(){
    cin >> n;
    cin >> k;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        v.push_back(s);
    }
    Try(0, 0, "");
    for(auto x : se){
       cout << x << endl;
    }
}