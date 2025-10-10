// print digit with recursion
#include <bits/stdc++.h>
using namespace std;
void fun(string n, int i)
{
    if (i == n.size())
        return;

    cout << n[i] << " ";
    fun(n, i + 1);
}

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        string n;
        cin >> n;
        fun(n, 0);
        cout << endl;
    }
}
