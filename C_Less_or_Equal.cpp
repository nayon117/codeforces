#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<long long> a(n);
    for(auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    if(k == 0) {
        long long x = a[0] - 1;
        if(x >= 1) cout << x;
        else cout << -1;
        return 0;
    }

    long long x = a[k-1];

    if(k < n && a[k-1] == a[k]) {
        cout << -1;
    } else {
        cout << x;
    }
}
