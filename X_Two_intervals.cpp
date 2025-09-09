#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll l1,r1,l2,r2;
   cin >> l1 >> r1 >> l2 >> r2 ;
   
   ll left = max(l1, l2);
   ll right = min(r1,r2);
   if(left <= right) cout << left << " " << right << '\n';
   else cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
