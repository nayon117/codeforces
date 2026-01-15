#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for(int x : a)
        if(x == 2)
            cnt++;

    if(cnt % 2){
        cout << -1 << '\n';
        return;
    }

    int need = cnt / 2;
    int cur = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 2)
            cur++;
        if(cur == need){
            cout << i + 1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
