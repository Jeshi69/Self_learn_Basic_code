// just reverse the input value
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string x;
        cin >> x;
        reverse(x.begin(), x.end());
        for (char c : x)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}