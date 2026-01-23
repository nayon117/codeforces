#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    bool same = true;
    for (int i = 1; i < n; i++)
        if (a[i] != a[0])
            same = false;

    if (same){
        cout << "NO\n";
        continue;
    }

    vector<int> ans;
    int l = 0, r = n - 1;
    while (l <= r){
        if (l == r)
            ans.push_back(a[l]);
        else {
            ans.push_back(a[l]);
            ans.push_back(a[r]);
        }
        l++;
        r--;
    }

    cout << "YES\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while (t--)solve();
    return 0;
}
