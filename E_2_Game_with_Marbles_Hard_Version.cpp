#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll>a(n),b(n);
    for(ll &x:a) cin >> x;
    for(ll &x:b) cin >> x;
    vector<pair<ll,ll>> v;
    for(ll i = 0;i < n;i++) v.push_back({a[i]+b[i],i});
    sort(v.rbegin(),v.rend());
    ll c = 0;
    for(ll i=0;i < n;i++){ 
        ll id = v[i].second;
        if(i%2==0) c += a[id]-1;
        else c -= b[id]-1;
    }
    cout << c <<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
}

