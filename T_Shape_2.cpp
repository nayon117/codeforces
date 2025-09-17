#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   int row, col;
   
   for (row = 1; row <= n; row++) {
    for (col = 1; col <= n - row; col++) 
      cout << " ";
    for (col = 1; col <= ( 2 * row) - 1; col++) 
      cout << "*";   
    cout << '\n';
   }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
