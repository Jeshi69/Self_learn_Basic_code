// diamond shape star print
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    int s = n - 1; // space komanor jonno

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << " "; // space print
        }
        s--;
        for (int j = 1; j <= k; j++)
        {
            cout << "*"; // star print
        }
        k += 2; // star 2 ta kore barbe
        cout << endl;
    }
    // second bottom part

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " "; 
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}