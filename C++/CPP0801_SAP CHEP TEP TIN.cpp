#include<bits/stdc++.h>

using namespace std;

int main()
{
    ifstream input;
    ofstream output;
    input.open("PTIT.in");
    output.open("PTIT.out"); 

    string s;
    while(getline(input, s))
    {
        output << s << endl;
    }

    input.close();
    output.close();

    return 0;
}
