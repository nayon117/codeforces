#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll mn = *min_element(a.begin(), a.end());
    ll mx = *max_element(a.begin(), a.end());

    if(mn == mx){
        cout << 1LL * n * (n - 1) << '\n';
        continue;
    }

    ll c1 = 0, c2 = 0;
    for(ll x : a){
        if(x == mn) c1++;
        if(x == mx) c2++;
    }

    cout << 2LL * c1 * c2 << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
