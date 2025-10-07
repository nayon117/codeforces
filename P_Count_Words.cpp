#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    getline(cin, s);

    for (char &c : s)
        if (!isalpha(c) && c != ' ')
            c = ' ';

    stringstream ss(s);
    string word;
    int cnt = 0;

    while (ss >> word)
        cnt++;

    cout << cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
