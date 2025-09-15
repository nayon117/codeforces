#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*" ;
    }
    cout << '\n';
   }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
