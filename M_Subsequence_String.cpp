#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   string s, t = "hello";
    cin >> s;
    int j = 0;
    for (char c : s)
        if (c == t[j]) j++;
    cout << (j == 5 ? "YES" : "NO");  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
