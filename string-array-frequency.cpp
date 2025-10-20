// jotogula input ache segulo koyta kore ache segulo ber kora
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n + 1];
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if (ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    int count[mx + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        count[ar[i]]++;
    }
    for (int i = 0; i <= mx; i++)
    {
        if (count[i] > 0)
        {
            cout << i << " - " << count[i] << endl;
        }
    }
}