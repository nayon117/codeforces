#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        long long diff = abs(a - b);
        long long n = diff * 2;

        if(diff == 0 || max({a, b, c}) > n){
            cout << -1 << '\n';
            continue;
        }

        long long d;
        if(c > diff) d = c - diff;
        else d = c + diff;

        if(d >= 1 && d <= n) cout << d << '\n';
        else cout << -1 << '\n';
    }
}
