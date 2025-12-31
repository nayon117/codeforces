#include <bits/stdc++.h>
using namespace std;

long long prod(long long x)
{
    long long r = 1;
    while (x)
    {
        r *= x % 10;
        x /= 10;
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    string s = to_string(n);
    long long ans = prod(n);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            continue;
        string t = s;
        t[i]--;
        for (int j = i + 1; j < t.size(); j++)
            t[j] = '9';
        ans = max(ans, prod(stoll(t)));
    }

    cout << ans;
}
