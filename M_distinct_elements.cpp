#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end()); 

    while (q--) {
        int x; cin >> x;
        int less = lower_bound(a.begin(), a.end(), x) - a.begin();
        int greater = a.end() - upper_bound(a.begin(), a.end(), x);
        cout << less << " " << greater << "\n";
    }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
