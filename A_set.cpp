#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;
    int q; 
    cin >> q;

    while(q--) {
        string op;
        long long x;
        cin >> op >> x;

        if(op == "insert") {
            s.insert(x);
        } 
        else if(op == "find") {
            cout << (s.count(x) ? "found" : "not found") << "\n";
        }
        else if(op == "lower_bound") {
            auto it = s.lower_bound(x);
            cout << (it == s.end() ? -1 : *it) << "\n";
        }
        else if(op == "upper_bound") {
            auto it = s.upper_bound(x);
            cout << (it == s.end() ? -1 : *it) << "\n";
        }
    }
}
