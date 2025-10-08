// input new value in array
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 0 ; i <n; i++){
        cin >> ar[i];
    }
    int pos,value;
    cin >> pos >> value;
    for(int i =n ; i >pos; i--){ // jehetu element insert tai negative decrement
        ar[i]=ar[i-1];
    }
    ar[pos] = value;  // kon position e kon value insert korbo tar logic
    for (int i = 0; i <= n ; i++){
        cout <<ar[i]<<" ";
    }
    return 0;

}