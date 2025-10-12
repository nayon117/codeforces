#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; cin >> n;
    int x = 1; 
    for(int i = 0; i < n; i++) {
        cout << x << " " << x+1 << " " << x+2 << " PUM\n";
        x += 4;
    }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
