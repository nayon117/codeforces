#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int N; ll K;
    cin >> N >> K;

    vector<pair<ll, int>> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    ll base = K / N;
    ll rem = K % N;

    vector<ll> ans(N, base);
    sort(v.begin(), v.end());

    for (int i = 0; i < rem; i++) {
        ans[v[i].second]++;
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
