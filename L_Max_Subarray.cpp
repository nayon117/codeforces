#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n;cin >> n;
   vector<int>a(n);
   for (int i = 0; i < n; i++) cin >> a[i];

   for (int i = 0; i < n; i++) {
        int mx = INT_MIN;
        for (int j = i; j < n; j++) {
            mx = max(mx, a[j]);
            cout << mx << " ";
        }
   }  
   cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
