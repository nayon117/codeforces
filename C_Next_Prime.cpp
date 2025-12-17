#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve () {
    int x;
    if (!(cin >> x)) return;

    while (true) {
        if (is_prime(x)) {
            cout << x << endl;
            return;
        }
        x++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
