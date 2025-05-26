#include<bits/stdc++.h>

using namespace std;

char c;
int len, x[101];
bool visited[101];

bool check(string s){
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i] == 'A' || s[i] == 'E'){
            if(s[i - 1] != 'A' && s[i - 1] != 'E' && s[i + 1] != 'A' && s[i + 1] != 'E'){
                return 0;
            }
        }
    }
    return 1;
}

void in(){
    string s = "";
    for(int i = 1; i <= len; i++){
        s += 'A' + x[i] - 1;
    }
    if(check(s)){
        cout << s << endl;
    }
}

void Try(int i){
    for(int j = 1; j <= len; j++){
        if(!visited[j]){
            x[i] = j;
            visited[j] = true;
            if(i == len){
                in();
            }
            else Try(i + 1);
            visited[j] = false;
        }
    }
}

int main(){
    cin >> c;
    len = c - 'A' + 1;
    Try(1);
}