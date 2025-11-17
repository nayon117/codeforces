#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<ll, vector<ll>, greater<ll>> pq;

    int q; 
    cin >> q;

    while(q--) {
        string s;
        cin >> s;

        if(s == "push") {
            ll x;
            cin >> x;
            pq.push(x);
        }
        else if(s == "pop") {
            pq.pop(); 
        }
        else {
            cout << pq.top() << "\n";
        }
    }
    return 0;
}
