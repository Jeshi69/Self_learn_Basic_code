//2D array print
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[4][3];
    for(int i =0 ; i < 4; i++){
        for(int j = 0;j <3 ;j++){
            cin>> a[i][j];
        }
    }

    cout <<"2d array :"<<endl;
    for(int i =0 ;i <4; i++){
        for (int j =0 ; j <3; j++){
            cout <<a[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}