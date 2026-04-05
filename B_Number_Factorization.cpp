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
        long long n;
        cin >> n;

        long long ans = 0;

        for (long long i = 2; i * i <= n; i++)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            if (cnt)
                ans += i * cnt;
        }

        if (n > 1)
            ans += n;

        cout << ans << "\n";
    }
}
