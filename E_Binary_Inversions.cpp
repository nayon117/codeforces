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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long inv = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                ones++;
            else
                inv += ones;
        }

        vector<int> pref1(n), suff0(n);

        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                c++;
            pref1[i] = c;
        }

        c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
                c++;
            suff0[i] = c;
        }

        long long ans = inv;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                long long cur = inv;
                cur -= suff0[i];
                cur += (i - pref1[i]);
                ans = max(ans, cur);
            }
            else
            {
                long long cur = inv;
                cur -= pref1[i];
                cur += ((n - 1 - i) - suff0[i]);
                ans = max(ans, cur);
            }
        }

        cout << ans << "\n";
    }
}
