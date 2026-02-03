#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int H, W; cin >> H >> W;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            int x;  cin >> x;
            if(x == 0) cout << '.';
            else cout << char('A' + x - 1);
        }
        cout << '\n';  
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
