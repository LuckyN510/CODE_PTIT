#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        string a; cin >> a;
        string b = a;
        sort(b.begin(), b.end());
        if (a == b) 
        {
            cout << "-1" << endl;
        } 
        else 
        {
            // tìm kiếm vị trí đầu tiên về mà số trc lớn sau
            int pos = -1;
            for (int i = a.length() - 1; i > 0; i--) 
            {
                if (a[i] < a[i - 1]) 
                {
                    pos = i - 1;
                    cout << a[pos] << endl;
                    break;
                }
            }

            if (pos != -1) 
            {
                // Tìm chữ số lớn nhất ở bên phải pos mà nhỏ hơn a[pos]
                int swapPos = pos + 1;
                for (int i = pos + 1; i < a.length(); i++) 
                {
                    if (a[i] < a[pos] && a[i] > a[swapPos]) 
                    {
                        swapPos = i;
                    }
                }
                cout << swapPos; 
                swap(a[pos], a[swapPos]);
            }
            cout << a << endl;
        }
    }
    return 0;
}
