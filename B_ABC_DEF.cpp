#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    const long long mod = 998244353;

    long long x = ((__int128)A * B) % mod;
    x = ((__int128)x * C) % mod;

    long long y = ((__int128)D * E) % mod;
    y = ((__int128)y * F) % mod;

    long long ans = (x - y) % mod;
    if (ans < 0) ans += mod;

    cout << ans;
}
