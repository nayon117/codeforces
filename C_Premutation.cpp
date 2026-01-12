#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n - 1));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - 1; j++)
            cin >> v[i][j];

    vector<int> p;
    vector<bool> used(n + 1, false);

    for(int pos = 0; pos < n - 1; pos++){
        map<int,int> cnt;
        for(int i = 0; i < n; i++){
            bool ok = true;
            for(int x : p)
                if(v[i][0] == x){
                    ok = false;
                    break;
                }
            if(ok)
                cnt[v[i][pos]]++;
        }

        int best = 0, mx = 0;
        for(auto [x,c] : cnt)
            if(!used[x] && c > mx){
                mx = c;
                best = x;
            }

        p.push_back(best);
        used[best] = true;
    }

    for(int i = 1; i <= n; i++)
        if(!used[i])
            p.push_back(i);

    for(int x : p)
        cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
