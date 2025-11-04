#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    while(q--) {
        string type; int x; cin >> type >> x;
        while(x--) {
            if(type == "next_permutation") {
                if(!next_permutation(s.begin(), s.end()))
                    sort(s.begin(), s.end());
            } else {
                if(!prev_permutation(s.begin(), s.end()))
                    sort(s.rbegin(), s.rend());
            }
        }
        cout << s << '\n';
    }
}
