#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int pos = 0;
    while(1){
        pos = s1.find(s2, pos);
        if(pos == -1) break;
        cout << pos + 1 << " ";
        pos++;
    }
}