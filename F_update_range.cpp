#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    if (!(cin >> n >> q)) return 0;
    vector<long long> a(n + 1);
    vector<long long> diff(n + 2, 0);

    for (int i = 1; i <= n; ++i) cin >> a[i];

    for (int i = 0; i < q; ++i) {
        int L, R;
        long long val;
        cin >> L >> R >> val;
        if (L < 1) L = 1;
        if (R > n) R = n;
        diff[L] += val;
        diff[R + 1] -= val;
    }

    long long curr = 0;
    for (int i = 1; i <= n; ++i) {
        curr += diff[i];
        a[i] += curr;
    }

    for (int i = 1; i <= n; ++i) {
        if (i > 1) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
    return 0;
}
