#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   vector<ll> g(n);
   for(int i = 0; i < n; i++) cin >> g[i];

   ll ans = 0;
   sort(g.begin(), g.end());

   for(int i = n - 1; i>= 0; i-= 2) 
    ans += g[i];
   
   cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
