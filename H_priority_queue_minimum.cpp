#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    int q; 
    cin >> q;

    while(q--) {
        string s;
        cin >> s;

        if(s == "push") {
            long long x;
            cin >> x;
            pq.push(x);
        }
        else if(s == "pop") {
            pq.pop(); 
        }
        else { // top
            cout << pq.top() << "\n";
        }
    }
    return 0;
}
