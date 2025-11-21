#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long q, n;
    cin >> q >> n;
    while (q--) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            cout << ((n >> x) & 1) << "\n";
        } else if (t == 2) {
            n |= (1LL << x);
            cout << n << "\n";
        } else if (t == 3) {
            n &= ~(1LL << x);
            cout << n << "\n";
        } else {
            n ^= (1LL << x);
            cout << n << "\n";
        }
    }
}
