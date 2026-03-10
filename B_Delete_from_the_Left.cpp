#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;

    int i = s.size() - 1, j = t.size() - 1, c = 0;

    while (i >= 0 && j >= 0 && s[i] == t[j])
    {
        c++;
        i--;
        j--;
    }

    cout << s.size() + t.size() - 2 * c;
}
