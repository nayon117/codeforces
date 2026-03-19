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

    for (int i = 1; i < n; i++)
    {
        int l = 0;
        while (i + l < n && s[l] != s[i + l])
            l++;
        cout << l << "\n";
    }
}
