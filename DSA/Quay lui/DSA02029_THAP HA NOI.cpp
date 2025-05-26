#include<bits/stdc++.h>

using namespace std;

void move(char s, char t){
    cout << s << " -> " << t << endl;
}

void thapHN(int n, char a, char b, char c){
    if(n == 1){
        move(a, c);
        return ;
    }
    thapHN(n - 1, a, c, b);
    move(a, c);
    thapHN(n - 1, b, a, c);
}

int main(){
    int n; cin >> n;
    thapHN(n, 'A', 'B', 'C');
}