#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N;
    cin >> N;

    const long long mod = 998244353;

    long long x = (N % mod + mod) % mod;

    cout << x;
}
