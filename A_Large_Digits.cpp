#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll a,b; cin >> a >> b;
    auto s=[&](ll x){
        return (x/100) + (x/10)%10 + x%10;
    };
    ll sA=s(a), sB=s(b);
    cout << max(sA,sB);  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
