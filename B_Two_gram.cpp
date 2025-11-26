#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; string s; 
   cin >> n >> s;
   map<string, int> mp;
   string ans;
   int mx = 0;
   for (int i = 0; i < n - 1; i++) {
        string t = s.substr(i, 2);
        if(mp[t]++ > mx) {
            mx = mp[t];
            ans = t;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
