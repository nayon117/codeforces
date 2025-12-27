#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n; cin >> n;
    if(n % 2 || n < 4){
        cout << -1 << '\n';
        return;
    }
    ll mn = (n + 5) / 6;
    ll mx = n / 4;
    if(mn > mx) cout << -1 << '\n';
    else cout << mn << " " << mx << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
