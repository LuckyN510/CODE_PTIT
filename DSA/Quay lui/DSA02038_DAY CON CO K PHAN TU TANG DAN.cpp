#include<bits/stdc++.h>

using namespace std;

int n, k, x[101], a[101];

void Try(int i){
	for(int j = x[i - 1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if(i == k){
			for(int i = 1; i <= k; i++){
				cout << a[x[i]] << " ";
			}
			cout << endl;
		}
		else Try(i + 1);
	}
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1);
    }
}