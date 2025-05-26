#include<bits/stdc++.h>

using namespace std;

vector<string> dd, yy;
string s = "2000";
int ok;

void sinh(){
    int i = 3; 
    while(i >= 0 && s[i] == '2'){
        s[i] = '0';
        --i;
    }
    if(i < 0) ok = 0;
    else s[i] = '2';
}

int main(){
    s = "2000";
    ok = 1;
    while(ok){
        yy.push_back(s);
        sinh();
    }
    dd.push_back("02");
    dd.push_back("20");
    dd.push_back("22");
    for(int i = 0; i < dd.size(); i++){
        for(int j = 0; j < yy.size(); j++){
            cout << dd[i] <<"/02/" << yy[j] << endl;
        }
    }
}