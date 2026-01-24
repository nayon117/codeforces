#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n,m;
    cin >> n >> m;
    int k = n*m;

    vector<long long>b(k);
    for(auto &x:b) cin >> x;

    long long mn = *min_element(b.begin(), b.end());
    long long mx = *max_element(b.begin(), b.end());

    cout << (mx - mn) * (k - 1) << "\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
