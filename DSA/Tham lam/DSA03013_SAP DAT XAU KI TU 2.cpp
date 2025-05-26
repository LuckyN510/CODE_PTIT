#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;   
    while(t--){
        int d; cin >> d;
        string s; cin >> s;
        map<char, int> mp;
        int n = s.length(); 
        for(char c : s){
            mp[c]++;
        }
        int k = 0;
        for(auto it : mp){
            k = max(k, it.second);
        }
        /*
            có n kí tự chọn phần tử có tần suất max ra xếp các phần tử còn lại tự động xếp
            ví dụ: d = 2, s = aaaaabbccdd
            k = 5 -> a  a  a  a  a
            có k - 1 khoảng trống và mối khoảng chống cần điền d - 1 kí tự
            -> số phần tử cần diền là (k - 1) * (d - 1)
            nếu lớn hơn số phần tử còn lại là n - k thì là sai
        
        */
        if((k - 1)*(d - 1) > n - k) cout << "-1\n";
        else cout << "1\n";
    }
}