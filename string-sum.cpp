//string er sum kora
#include <bits/stdc++.h>
using namespace std;
int main (){
    int s;
    cin >> s;
    int sum=0;
 while (s> 0) {
        int digit = s % 10; //vagsesh ber kora
        sum += digit; //vagseh er man jog
        s/=10;  //vag kora
}
cout << sum;
}

// no over flow 
#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;  // read as string
    long long sum = 0;
    for (char c : s) {
        sum += c - '0';  // convert char to digit
    }
    cout << sum << "\n";
    return 0;
}
