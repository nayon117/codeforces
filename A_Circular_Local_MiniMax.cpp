#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        if (n % 2)
        {
            cout << "NO\n";
            continue;
        }

        vector<long long> b(n);
        int mid = n / 2;

        for (int i = 0; i < mid; i++)
        {
            b[2 * i] = a[i];
            b[2 * i + 1] = a[i + mid];
        }

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            long long l = b[(i - 1 + n) % n];
            long long r = b[(i + 1) % n];
            if (!((b[i] > l && b[i] > r) || (b[i] < l && b[i] < r)))
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (auto x : b)
                cout << x << " ";
            cout << "\n";
        }
    }
}
