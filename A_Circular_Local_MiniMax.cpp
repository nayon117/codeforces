#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    unordered_map<long long,int> mp;
    int mx = 0;
    for(auto x : a) mx = max(mx, ++mp[x]);

    if(mx > n / 2){
        cout << "NO\n";
        continue;
    }

    vector<long long> b(n);
    for(int i = 0; i < n; i++){
        b[i] = a[(2LL * i) % n];
    }

    cout << "YES\n";
    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
    cout << "\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
