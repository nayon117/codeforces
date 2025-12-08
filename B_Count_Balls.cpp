#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll n , a, b; cin >> n >> a >> b;
   ll c = a + b;
   ll full = n / c;
   ll rem = n % c;
   cout << full * a + min(rem, a);
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
