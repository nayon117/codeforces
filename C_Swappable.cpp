#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   ll n; cin >> n;
   vector<ll> a(n);
   for (auto &i : a) cin >> i;

   unordered_map<ll,ll> mp;
   for(ll x: a) mp[x]++;
   
   ll total = (n * (n - 1))/ 2;
   ll eq = 0;

   for (auto &p:mp) {
        ll f = p.second;
        eq += f * (f - 1) / 2;
   }

   cout << total - eq;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
