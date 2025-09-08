#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
     char x; cin >> x;
     if(x >= '0' && x <= '9') cout << "IS DIGIT\n";
     else {
      cout << "ALPHA\n";
      if(x >= 'A' && x <= 'Z') cout << "IS CAPITAL\n";
      else cout << "IS SMALL\n";
     }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
