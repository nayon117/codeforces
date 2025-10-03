#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n ;cin >> n;
   vector<int>a(n);
   for (auto &i : a) cin >> i;
   int cnt = 1, valid = 0;

   for (int i = 1; i < n; i++) {
        if(a[i] >= a[i - 1]) cnt++;
        else {
            valid += (cnt * (cnt + 1)) / 2;
            cnt = 1;
        }
   }  
    valid += (cnt * (cnt + 1)) / 2;
    cout << valid << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
