// array print with function
#include <bits/stdc++.h>
using namespace std;
void fun (int a[],int n){
    for(int i =0; i < n ; i++){
        cout <<a[i]<<" ";
    }
}
int main (){
    int n;
    cin >> n;
    int a[n];
    for(int i =0 ;i < n ;i++){
        cin >>a[i];
    }
    fun(a,n);//function call
}