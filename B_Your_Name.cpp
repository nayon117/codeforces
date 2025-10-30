#include <bits/stdc++.h>
using namespace std;

void solve () {
   int q; cin >> q;
   string s, t; cin >> s >> t;
   sort(s.begin(),s.end());
   sort(t.begin(), t.end());
   if (s == t) cout <<  "YES\n";
   else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
