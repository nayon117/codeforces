#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long q, n;
    cin >> q >> n;
    while(q--) {
        int t; 
        cin >> t;
        if(t == 1) {
            long long x; cin >> x;
            n |= x;
        }
        else if(t == 2) {
            long long x; cin >> x;
            n &= x;
        }
        else if(t == 3) {
            long long x; cin >> x;
            n ^= x;
        }
        else {
            n = ~n;
        }
        cout << n << "\n";
    }
    return 0;
}
