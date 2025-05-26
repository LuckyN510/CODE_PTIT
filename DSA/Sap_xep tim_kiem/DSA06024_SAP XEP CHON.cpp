#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem = 0;
    int minIndex = 0;
    for(int i = 0; i < n - 1; i++){
        minIndex = i;
        dem++;
        for(int j = i + 1; j < n; j++){
            if(a[minIndex] > a[j]){
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
        cout << "Buoc " << dem << ": ";
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}