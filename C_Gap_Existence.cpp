#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N, X;
    cin >> N >> X;
    vector<long long> a(N);
    unordered_set<long long> s;

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (s.count(a[i] - X))
        {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
}
