#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem = 0;
    for(int i = 0; i < n - 1; i++){
        dem++;
        cout << "Buoc " << dem << ": ";
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}