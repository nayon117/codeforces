#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<long long> dq;
    int q;
    cin >> q;

    while (q--) {
        string s;
        cin >> s;

        if (s == "push_back") {
            long long x;
            cin >> x;
            dq.push_back(x);
        } 
        else if (s == "push_front") {
            long long x;
            cin >> x;
            dq.push_front(x);
        } 
        else if (s == "pop_front") {
            dq.pop_front();
        } 
        else if (s == "pop_back") {
            dq.pop_back();
        } 
        else if (s == "front") {
            cout << dq.front() << "\n";
        } 
        else if (s == "back") {
            cout << dq.back() << "\n";
        } 
        else {
            int x;
            cin >> x;
            cout << dq[x - 1] << "\n";
        }
    }
}
