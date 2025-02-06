#include<bits/stdc++.h>

using namespace std;

void LOWER(string &s) {
    for(char &c : s) {
        c = tolower(c);
    }
}

int main() {
    ifstream fin1("DATA1.in");
    ifstream fin2("DATA2.in");
    string s; 
    set<string> se1, se2, giao, hop;
    while (fin1 >> s) {
        LOWER(s);
        se1.insert(s);
        hop.insert(s);
    }
    while (fin2 >> s) {
        LOWER(s);
        se2.insert(s);
        hop.insert(s);
    }
    for (auto x : se2) {
        if (se1.count(x)) {
            giao.insert(x);
        }
    }
    for (auto it : hop) {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : giao) {
        cout << it << " ";
    }
    cout << endl;
    fin1.close();
    fin2.close();

    return 0;
}
