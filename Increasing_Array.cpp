#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n, x, last = 0, ans = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x < last) ans += last - x;
        else last = x;
    }
    cout << ans;  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
