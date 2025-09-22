#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll n; cin >> n;
   string s; cin >> s;
   ll sum = 0;
  for (int i = 0; i < s.size(); i++) {
    sum += (int)s[i] - 48;
  }
   cout << sum << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
