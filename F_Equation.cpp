#include <bits/stdc++.h>
using namespace std;

long long power(long long x, int p)
{
    long long res = 1;
    for (int i = 1; i <= p; i++)
        res *= x;
    return res;
}

int main()
{
    int x, n;
    cin >> x >> n;

    long long s = 0;
    for (int i = 2; i <= n; i += 2)
    {
        s += power(x, i);
    }

    cout << s << endl;
    return 0;
}
