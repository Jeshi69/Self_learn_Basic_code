// swap using function
#include <bits/stdc++.h>
using namespace std;
 void fun(int &x, int &y)
{
    swap(x,y);
}
int main()
{
    int a, b;
    cin >> a >> b;
    fun(a, b);
    cout << a << " " << b;
}