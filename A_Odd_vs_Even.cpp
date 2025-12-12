#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n; cin >> n;
    int k = __builtin_ctzll(n);
    if(k == 0) cout << "Odd\n";
    else if(k == 1) cout << "Same\n";
    else cout << "Even\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
