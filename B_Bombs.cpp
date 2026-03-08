#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<string> g(r);
    for (int i = 0; i < r; i++)
        cin >> g[i];
    vector<string> ans = g;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (isdigit(g[i][j])) {
                int p = g[i][j] - '0';
                for (int x = 0; x < r; x++) {
                    for (int y = 0; y < c; y++) {
                        if (abs(x - i) + abs(y - j) <= p)
                            ans[x][y] = '.';
                    }
                }
            }
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            if (isdigit(ans[i][j]))
                ans[i][j] = '.';
        }
        cout << ans[i] << "\n";
    }
}
