#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int a, b;  char s;
   cin >> a >> s >> b;
   
   switch (s) {
   case '+':
    cout << a + b ;
    break;
   case '-':
    cout << a - b ;
    break;
   case '*':
    cout << a * b ;
    break;
   case '/':
    cout << a / b ;
    break;
   
   default:
    break;
   }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
