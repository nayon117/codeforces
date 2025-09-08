#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   vector<int> p(n);
   for (auto &i : p) cin >> i;

   for(int i = 0; i < n; i++) {
    cout << (n + 1 - p[i]) << (i + 1 == n ? "\n": " ");
   }  
   
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
