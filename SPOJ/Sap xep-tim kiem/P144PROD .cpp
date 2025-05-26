#include<bits/stdc++.h>

using namespace std;

vector<string> v;
int cnt = 0;
int n;

int soSanh(string a, string b){
    int lenA = a.length();
    int lenB = b.length();
    while(lenA < lenB){
        a = "0" + a;
        lenA++;
    }
    while(lenA > lenB){
        b = "0" + b;
        lenB++;
    }
    for (int i = 0; i < lenA; i++) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return -1;
    }
    return 0;

}

// loại bỏ số 0 ở đầu
string chuanHoa(string s){
    int pos = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '0'){
            pos = i;
            break;
        }
    }
    return s.substr(pos);
}

int main(){
    while(1){
        ++cnt;
        cin >> n;
        if(n == 0) break;
        string s;
        v.clear();
        while(n--){
            cin >> s;
            v.push_back(s);
        }
        string Max = v[0];
        string Min = v[0];
        int ok = 0;
        for(int i = 1; i < v.size(); i++){
            if(soSanh(v[i], Max) == 1){
                Max = v[i];
                ok = 1;
            }
            if(soSanh(v[i], Min) == -1){
                Min = v[i];
                ok = 1;
            }
        }
        cout << "Case " << cnt << ": ";
        if(!ok) cout << "There is a row of trees having equal height." << endl;
        else{
            cout << chuanHoa(Min) << " ";
            cout << chuanHoa(Max) << "\n";
        }
        Max = "";
        Min = "";
    }
}