#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   vector<ll> a(n);
   for (int i = 0; i < n; i++) cin >> a[i];
   ll m ; cin >> m;
   ll idx = -1;
   for (int i = 0; i < n; i++) {
    if(a[i] == m) {
      idx = i;
      break;
    }
   }  
   cout << idx << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
