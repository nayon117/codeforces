#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   vector<int>a(n);
   for (auto &i : a) cin >> i;
   sort(a.begin(), a.end());
   for (int i = 0; i < n; i++) cout << a[i] << " ";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
