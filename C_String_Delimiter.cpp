#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    string S;
    cin >> N >> S;

    bool in = false;

    for (char &c : S)
    {
        if (c == '"')
            in = !in;
        else if (c == ',' && !in)
            c = '.';
    }

    cout << S;
}
