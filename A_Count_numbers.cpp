#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n, q; cin >> n >> q;
    vector<int>freq(n+1,0);

    while(q--) {
        int z, x; cin >> z >> x;
        if(z== 1) freq[x]++;
        else cout << freq[x] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
