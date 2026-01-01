#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll a , b; cin >> a >> b;
   if(b == 1) {
        cout << "NO\n";
   } else {
        cout << "YES\n";
        cout << a << " " << a * (b - 1) << " " << a * b << "\n";
   } 
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
