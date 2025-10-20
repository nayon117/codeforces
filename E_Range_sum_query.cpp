#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    cin >> N >> Q;
    vector<long long> prefix(N + 1);
    
    for (int i = 1; i <= N; i++) {
        long long x;
        cin >> x;
        prefix[i] = prefix[i - 1] + x;
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] - prefix[L - 1] << '\n';
    }
}
