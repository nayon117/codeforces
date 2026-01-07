#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n; cin >> n;
    if(n & 1){
        cout << 1 << " " << n-2 << " " << 1 << "\n";
    } else{
        cout << 2 << " " << n-4 << " " << 2 << "\n";
    }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
