#include <bits/stdc++.h>
using namespace std;

long long layer(long long n, long long x, long long y)
{
    return min({x - 1, y - 1, n - x, n - y});
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        cout << llabs(layer(n, x1, y1) - layer(n, x2, y2)) << "\n";
    }
}
