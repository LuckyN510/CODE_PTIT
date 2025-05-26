#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        if(i != k) v.push_back(i);
    }
    do{
        cout << k << " ";
        for(int it : v){
            cout << it << " ";
        }
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
}