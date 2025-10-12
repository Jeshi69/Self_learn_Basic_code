//vowel kotogula ache segula check kora use recursion
#include<bits/stdc++.h>
using namespace std;
int fun(string a,int i){
    if(i== a.size()){
        return 0 ;
    }
    int ans = fun(a,i+1);
    if(a[i] >= 'A' && a[i] <='Z'){//upper thke lower e convert
        a[i]+=32;
    }
    if('a' == a[i] || 'e' == a[i] || 'i' == a[i] || 'o' == a[i] || 'u' == a[i]){
        return ans+1;
    }
    else {
        return ans;
    }

}
int main (){
    string s;
    getline(cin,s);
    int cnt = fun(s,0);
    cout << cnt <<endl;
}