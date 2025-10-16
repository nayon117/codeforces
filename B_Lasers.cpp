#include <bits/stdc++.h>
using namespace std;

void solve () {
   int n, m; ll x, y;
   cin >> n >> m >> x >> y;
   vector<int>a(n), b(m);
   for (auto &i : a) cin >> i;  
   for (auto &i : b) cin >> i;  
   cout << n + m << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}

