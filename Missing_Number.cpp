#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll n; cin >> n;

    ll s = n * (n + 1) / 2;
    ll x = 0, v;

    for (int i = 0; i < n - 1; i++) {
        cin >> v;
        x += v;
    }
    cout << s - x;  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
