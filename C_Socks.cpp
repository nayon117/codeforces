#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve () {
    int n;
    if (!(cin >> n)) return;
    map<int, int> counts;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        counts[a]++;
    }
    ll pairs = 0;
    for (auto const& [color, count] : counts) {
        pairs += count / 2;
    }
    cout << pairs << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve(); 
    return 0;
}
