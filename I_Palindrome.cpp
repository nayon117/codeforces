#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
  int n; cin >> n;
  int num = n, rev = 0;
  while(n > 0) {
    rev = rev * 10 + n % 10;
    n /= 10;
  }

  cout << rev << '\n';
  if(num == rev) cout << "YES\n";
  else cout << "NO\n";   
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
