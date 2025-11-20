#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<long long,long long>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    vector<pair<long long,long long>> ans;
    long long L = v[0].first, R = v[0].second;

    for(int i = 1; i < n; i++) {
        long long l = v[i].first, r = v[i].second;
        if(l <= R) R = max(R, r);
        else {
            ans.push_back({L, R});
            L = l;
            R = r;
        }
    }
    ans.push_back({L, R});

    for(auto &p : ans) cout << p.first << " " << p.second << "\n";
    return 0;
}
