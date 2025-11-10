#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    stack<int> st;

    while (q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x; cin >> x;
            st.push(x);
        } 
        else if (cmd == "pop") {
            st.pop();
        } 
        else if (cmd == "top") {
            cout << st.top() << '\n';
        }
    }
    return 0;
}
