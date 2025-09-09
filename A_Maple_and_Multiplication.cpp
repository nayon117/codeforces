#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int a, b; cin >> a >> b;
   if(a == b) cout << 0 << '\n';
   else if(a% b == 0 ||  b% a == 0) cout << 1 << '\n';
   else cout << 2  << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
