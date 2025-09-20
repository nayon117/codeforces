#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int i = 0, j = n -1;
    bool ok = true;
    while(i <= j) {
      if(a[i] != a[j]) {
        ok = false;
        break;
      }
      i++; j--;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
