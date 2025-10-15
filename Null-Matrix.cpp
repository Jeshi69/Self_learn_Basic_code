// sobgula value 0 hobe matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i =0;i < row; i++){
        for(int j=0;j <col;j ++){
            if (a[i][j]==0){
                cnt++;//count korbe 0 koyta kore ache
            }
           
        }
        cout << endl;
        
    }
     cout <<cnt;
    
}