#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
  int k, x;
  cin >> k >> x;

  while (k--) {
    x = (x * 2) ;
  }
  cout << x << '\n';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
