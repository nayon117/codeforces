#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n, q; cin >> n >> q;
   vector<ll> a(n);
   for (auto &i : a) cin >> i;
   sort(a.begin(), a.end());
   
   while(q--){
    string type; ll x;
    cin >> type >> x;
    if(type == "binary_search"){
        cout << (binary_search(a.begin(), a.end(), x) ? "found": "not found")<< '\n';
    }
    else if(type == "lower_bound"){
        auto it = lower_bound(a.begin(), a.end(), x);
        if( it == a.end()) cout << -1 << '\n';
        else cout << *it << '\n';
    }
    else if(type == "upper_bound"){
        auto it = upper_bound(a.begin(), a.end(), x);
        if( it == a.end()) cout << -1 << '\n';
        else cout << *it << '\n';
    }
   }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
