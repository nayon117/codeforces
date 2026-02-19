#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long r, b, d;
        cin >> r >> b >> d;

        long long mx = max(r, b);
        long long mn = min(r, b);

        if(mx <= mn * (d + 1)) cout << "YES\n";
        else cout << "NO\n";
    }
}
