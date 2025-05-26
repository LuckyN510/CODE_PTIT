#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        v.push_back(s);
    }
    string t; cin >> t;
    sort(v.begin(), v.end());
    do{
        for(int i = 0; i < v.size(); i++){
            if(v[v.size() - 1] == t){
                cout << v[i] << " ";
            }
        }
        cout << endl;

    }while(next_permutation(v.begin(), v.end()));
}