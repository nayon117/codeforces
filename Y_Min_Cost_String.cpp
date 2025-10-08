#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    vector<int> c(26);
    for (int &x : c) cin >> x;

    int n = s.size();
    vector<char> left(n), right(n);

    char prev = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') prev = s[i];
        left[i] = prev;
    }

    prev = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != '?') prev = s[i];
        right[i] = prev;
    }

    for (int i = 0; i < n; i++) if (s[i] == '?') {
        int best = 0, bestVal = INT_MAX;
        for (int k = 0; k < 26; k++) {
            int val = 0;
            if (left[i]) val += abs(c[left[i]-'a'] - c[k]);
            if (right[i]) val += abs(c[right[i]-'a'] - c[k]);
            if (val < bestVal || (val == bestVal && k < best)) {
                bestVal = val; best = k;
            }
        }
        s[i] = 'a' + best;
    }

    ll ans = 0;
    for (int i = 0; i + 1 < n; i++)
        ans += abs(c[s[i]-'a'] - c[s[i+1]-'a']);
    cout << ans << "\n" << s << "\n";
}
