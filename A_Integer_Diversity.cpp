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
        set<int> s;
        bool z = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
                z = 1;
            else
            {
                s.insert(abs(x));
                s.insert(-abs(x));
            }
        }

        int ans = s.size();
        if (z)
            ans++;

        cout << min(ans, n) << "\n";
    }
}
