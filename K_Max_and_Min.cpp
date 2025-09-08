#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int a, b, c; cin >> a >> b >> c;
   int mn = min({a, b, c});
   int mx = max({a, b, c});
   cout << mn << " " << mx << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
