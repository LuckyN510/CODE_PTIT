#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, s, m; cin >> n >> s >> m;
        int buyDay = s - (s / 7);
        int maxFood = buyDay * n ;// số lượng thực đc mua nhiều nhất trong s ngày
        int maxNecesary = s * m; // số lượng lương thực tiêu thụ max trong s ngày
        if(maxFood < maxNecesary){
            cout << "-1\n";
        }
        else{
            for(int i = 1; i <= buyDay; i++){
                if(n * i >= maxNecesary){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}