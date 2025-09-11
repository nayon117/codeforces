#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(int n) {
  if(n < 2) return 1;
  return n * fact(n - 1);
}

void solve () {
   int n; cin >> n;
   ll f = fact(n);
   cout << f << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
