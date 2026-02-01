#include <bits/stdc++.h>
using namespace std;
#define ll long long

string pi = "314159265358979323846264338327";

void solve () {
    string n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < (int)n.size() && i < (int)pi.size(); i++){
        if(n[i] == pi[i]) cnt++;
        else break;
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
