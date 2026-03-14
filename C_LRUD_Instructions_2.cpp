#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    string S;
    cin >> N >> S;

    set<pair<long long, long long>> vis;
    long long x = 0, y = 0;
    vis.insert({0, 0});

    for (char c : S)
    {
        if (c == 'R')
            x++;
        if (c == 'L')
            x--;
        if (c == 'U')
            y++;
        if (c == 'D')
            y--;

        if (vis.count({x, y}))
        {
            cout << "Yes";
            return 0;
        }
        vis.insert({x, y});
    }

    cout << "No";
}
