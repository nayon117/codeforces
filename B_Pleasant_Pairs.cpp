#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n;
    cin >> n;

    vector<int> a(n + 1), pos(2 * n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }

    ll ans = 0;

    for(int i = 1; i <= n; i++){
        for(int x = 1; x * a[i] <= 2 * n; x++){
            int j = x * a[i] - i;
            if(j > i && j <= n && pos[x] == j)
                ans++;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
