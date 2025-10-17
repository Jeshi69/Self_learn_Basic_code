// recursion -nije nijeke call kore 1 to n print
//Forward recursion
#include <bits/stdc++.h>
using namespace std;
void fun(int i, int n)
{
    if (i == n + 1)
        return;
    cout << i << " " <<endl;//forward recursion
    fun(i + 1, n);
     cout << i <<endl;//backward recursion
}
int main()
{
    int n;
    cin >> n;
    fun(1, n);
    return 0;
}