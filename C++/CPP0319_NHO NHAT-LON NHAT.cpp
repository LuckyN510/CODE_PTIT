#include <bits/stdc++.h>

using namespace std;

string solve(int m, int sum, bool min_val) 
{
    if (sum == 0) 
    {
        if (m == 1) return "0";
        return "-1";
    }
    
    if (sum < 1 || sum > 9 * m) return "-1";

    string res(m, '0');
    for (int i = m - 1; i >= 0; i--) 
    {
        int digit = min(sum, 9);
        if (min_val) {
            res[i] = '0' + digit;
            sum -= digit;
        } 
        else 
        {
            res[i] = '0' + digit;
            sum -= digit;
        }
    }

    if (min_val) 
    {
        if (res[0] == '0') 
        {
            for (int i = 1; i < m; i++) 
            {
                if (res[i] > '0') 
                {
                    res[i]--;
                    res[0] = '1';
                    break;
                }
            }
        }
    }
    
    return res;
}

int main() 
{
    int m, s;
    cin >> m >> s;

    if (s == 0) 
    {
        if (m == 1) 
        {
            cout << "0 0" << endl;
        } 
        else 
        {
            cout << "-1 -1" << endl;
        }
        return 0;
    }
    if (s < 1 || s > 9 * m) 
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    string min_val = solve(m, s, true);
    string max_val = solve(m, s, false);
    reverse(max_val.begin(), max_val.end());
    cout << min_val << ' ' << max_val << endl;
}