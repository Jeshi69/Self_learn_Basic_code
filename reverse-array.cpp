// array revers korbo
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // reverse(ar,ar+n); //built in function use kore reverse kora jay
    int i = 0, j = n - 1;
    while (i < j)   //while loop use kore reverse
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}