#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int k = min_element(a.begin(), a.end()) - a.begin();
        cout << k << endl;
    }
}
/*
    5
    5 4 1 2 3
    giả thiết mảng đã đc sort 1 2 3 4 5
    nên khi quay vòng phần tử nhỏ nhất sẽ xuất hiện ở vị trí k
    5 1 2 3 4
    4 5 1 2 3 
*/