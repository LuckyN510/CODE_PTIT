#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> &a){
    int kc = 0;
    for(int i = 1; i < a.size(); i++){
        kc += a[i - 1] - a[i];
    }
    return kc > 0;
}

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    do{
        if(check(v)){
            for(int it : v){
                cout << it << ' ';
            }
            cout << endl;
        }
    }while(next_permutation(v.begin(), v.end()));
}