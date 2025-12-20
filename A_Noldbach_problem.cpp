#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;

    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.size();
            primes.push_back(i);
        }
    }

    int count = 0;
    for (size_t i = 0; i < primes.size() - 1; i++) {
        int sum = primes[i] + primes[i+1] + 1;
        if (sum <= n && is_prime[sum]) {
            count++;
        }
    }

    if (count >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
