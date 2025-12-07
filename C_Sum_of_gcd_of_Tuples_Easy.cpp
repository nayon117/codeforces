#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int k ; 
   if(!(cin >> k)) return;
   ll ans = 0;

   for (int a = 1; a <= k; a++) 
     for (int b = 1; b <= k; b++) 
        for (int c = 1; c <= k; c++)
            ans += __gcd(__gcd(a,b), c);

   cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
