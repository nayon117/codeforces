#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    ll x;
    int odd = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x & 1) odd++;
    }
    cout << (odd % 2 == 0 ? "YES" : "NO");  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
