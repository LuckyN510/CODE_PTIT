#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int key = 0, pos = 0;
    for(int i = 0; i < n; i++){
        key = a[i];
        pos = i - 1;
        while(pos >= 0 && a[pos] > key){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = key;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}