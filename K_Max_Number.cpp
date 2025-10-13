//find maximum number using recursion
#include <bits/stdc++.h>
using namespace std;

int findMax(int n, int maxNumber)
{
    if (n == 0)
        return maxNumber;

    int x;
    cin >> x;
    if (x > maxNumber)
        maxNumber = x;

    return findMax(n - 1, maxNumber);
}

int main()
{
    int N;
    cin >> N;

    int maxNumber = INT_MIN;   //  works for negative numbers too
    cout << findMax(N, maxNumber) << endl;

    return 0;
}
