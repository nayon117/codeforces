#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll n, ans = 0;
   cin >>  n;
   for(ll p = 5; p <= n; p*= 5) {
        ans += n / p;
   }  
   cout << ans ;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
