#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    while (q--) {
        string s; cin >> s;
        if (s == "pop_back") a.pop_back();
        else if (s == "front") cout << a.front() << '\n';
        else if (s == "back") cout << a.back() << '\n';
        else if (s == "sort") {
            int l, r; cin >> l >> r;
            sort(a.begin()+l-1, a.begin()+r);
        }
        else if (s == "reverse") {
            int l, r; cin >> l >> r;
            reverse(a.begin()+l-1, a.begin()+r);
        }
        else if (s == "print") {
            int p; cin >> p;
            cout << a[p-1] << '\n';
        }
        else if (s == "push_back") {
            int x; cin >> x;
            a.push_back(x);
        }
    }
}
