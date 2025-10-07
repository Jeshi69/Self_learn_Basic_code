//array copy
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int ar[n];
    // main array input
    for(int i = 0 ; i <n; i++){
        cin >> ar[i];
    }
    // copy array store
    int cpy[n]; 
     for(int i = 0 ; i <n; i++){
         cpy[i] = ar[i];
    }
    //main array print
    for(int i = 0 ; i <n; i++){
        cout << ar[i] <<" ";
    }
    cout << endl;    //next line
    //copy array print
    for(int i = 0 ; i <n; i++){ 
        cout<<cpy[i] << " ";
    }

    return 0;
}