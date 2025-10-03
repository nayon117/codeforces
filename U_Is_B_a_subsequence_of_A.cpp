#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll n, m; cin >>  n >> m;
   vector<ll>a(n), b(m);
   for (ll i = 0; i < n; i++) cin >> a[i];  
   for (ll i = 0; i < m; i++) cin >> b[i];
   
   ll j = 0;
    for (ll i = 0; i < n; i++) {
        if(a[i] != b[j]) {
            continue;
        } else j++;
    }
    if(j == m) cout << "YES\n";
    else cout << "NO\n";
   
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
