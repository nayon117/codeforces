#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll a, b; cin >> a >> b;

    if(a == b){
        cout << 1 << '\n';
        return;
    }

    if(b - a >= 10){
        cout << 0 << '\n';
        return;
    }

    ll res = 1;
    for(ll i = a + 1; i <= b; i++)
        res = (res * (i % 10)) % 10;

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve ();
    return 0;
}
