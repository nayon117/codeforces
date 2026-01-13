#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    ll g = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        g = __gcd(g, ll(abs(x - i)));
    }
    cout << g << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
