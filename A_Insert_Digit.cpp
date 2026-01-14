#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; char d;
    cin >> n >> d;
    string s; cin >> s;

    bool done = false;
    for(int i = 0; i < n; i++){
        if(s[i] < d){
            s.insert(s.begin() + i, d);
            done = true;
            break;
        }
    }

    if(!done)
        s.push_back(d);

    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
