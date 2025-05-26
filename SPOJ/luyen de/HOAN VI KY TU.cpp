#include <bits/stdc++.h>
using namespace std;

bool visited[256]; 
char x[101];

char c1, c2;

void Try(int i, int n) {
    for (char c = c1; c <= c2; c++) {
        if (!visited[c]) {
            x[i] = c;
            visited[c] = true;
            if (i == n) {
                for (int l = 1; l <= n; l++) {
                    cout << x[l];
                }
                cout << '\n';
            } else {
                Try(i + 1, n);
            }
            visited[c] = false;
        }
    }
}

int main() {
    cin >> c1 >> c2;
    if(c1 > c2) swap(c1, c2);
    int n = c2 - c1 + 1;
    Try(1, n);
    return 0;
}
