#include<bits/stdc++.h>

using namespace std;

int stringToNumber(string s){
    int num = 0, st = 0;
    bool isNagative = false;
    if(s[0] == '-'){
        isNagative = true;
        st = 1;
    }
    for(int i = st; i < s.length(); i++){
        if(isdigit(s[i]))
            num = num * 10 + (s[i] - '0') ;
    } 
    if(isNagative) return -num;
    else return num;
}

int main(){
    string s;
    while(true){ 
        getline(cin, s);
        if(s == ".") break;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '.' || s[i] == ','){
                s[i] = ' ';
            }
        }
        vector<int> isNumber;
        vector<int> num;
        vector<string> word;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            if(tmp[0] == '-' || tmp[0] >= '0' && tmp[0] <= '9'){
                num.push_back(stringToNumber(tmp));
                isNumber.push_back(1);
            }
            else{
                word.push_back(tmp);
                isNumber.push_back(0);
            }
        }
        sort(num.begin(), num.end());
        sort(word.begin(), word.end());
        int indexNum = 0, indexWord = 0;
        for(int i = 0; i < isNumber.size() - 1; i++){
            if(isNumber[i] == 1){
                cout << num[indexNum] << ", ";
                indexNum++;
            }
            else{
                cout << word[indexWord] << ", ";
                indexWord++;
            }
        }
        if(isNumber[isNumber.size() - 1] == 1){
            cout << num[indexNum] << ".";
            indexNum++;
        }
        else{
            cout << word[indexWord] << ".";
            indexWord++;
        }
        cout << endl;
    }
}