#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q; cin >> q;
    deque<long long> dq;
    
    while(q--){
        string s; cin >> s;
        if(s == "push"){
            long long x; cin >> x;
            dq.push_back(x);
        }
        else if(s == "pop") dq.pop_front();
        else if(s == "front") cout << dq.front() << '\n';
        else if(s == "back") cout << dq.back() << '\n';
    }
}
