// choto theke boro sajano
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        
    }
    for(int i =0 ; i < n ;i++){
            cout << ar[i]<<" ";
        }
    return 0;
}