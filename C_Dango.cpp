#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            int j = i + 1, cnt = 0;
            while (j < n && s[j] == 'o')
            {
                cnt++;
                j++;
            }
            if (cnt > 0)
                ans = max(ans, cnt);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            int j = i - 1, cnt = 0;
            while (j >= 0 && s[j] == 'o')
            {
                cnt++;
                j--;
            }
            if (cnt > 0)
                ans = max(ans, cnt);
        }
    }

    cout << ans;
}
