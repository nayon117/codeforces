#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n;
    string s;
    cin >> n >> s;

    int ans = 1; 
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i-1]) ans++;
    }

    cout << ans << endl;  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
