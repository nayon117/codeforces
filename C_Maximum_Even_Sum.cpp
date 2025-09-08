#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve () {
  ll a, b; cin >> a >> b;

  if(a%2 && b % 2) cout << a*b + 1 << '\n';
  else if(a % 2 == 0 && b % 2) cout << -1 << '\n';
  else if(a % 2 == 0 && b%2 == 0 || b%4 == 0) cout << (2 + ((a*b) / 2)) << '\n';
  else cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
