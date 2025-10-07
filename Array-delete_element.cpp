//Array er moddhe element delete 
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 0 ; i <n; i++){
        cin >> ar[i];
    }
    int pos;
    cin >> pos ;
    for(int i =pos ; i < n-1; i++){ // jehetu element delete korbo tai positive increment
        ar[i]=ar[i+1];
    }

    for (int i = 0; i <  n -1; i++){
        cout <<ar[i]<<" ";
    }
    return 0;

}