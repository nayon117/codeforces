#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long X;
    int K;
    cin >> X >> K;

    long long p = 1;

    for (int i = 1; i <= K; i++)
    {
        p *= 10;
        long long r = X % p;
        long long base = X - r;
        if (r >= p / 2)
            X = base + p;
        else
            X = base;
    }

    cout << X;
}
