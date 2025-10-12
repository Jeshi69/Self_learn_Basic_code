//factorial ber kora using recursion
#include<bits/stdc++.h>
using namespace std;
 long long int fun(long long int j){
    if(j == 0){
        return 1;
    }
    long long int ans = fun(j-1);
    return ans*j;//backtracking
    
}
int main (){
    long long int n;
    cin >> n;
    long long int fac = fun(n);
    cout << fac;
}