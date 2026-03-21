#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> cnt;
    for (auto x : a)
        cnt[x]++;

    int mex = 0;
    while (true)
    {
        if (cnt[mex] == 0)
            break;
        if (cnt[mex] > k)
            break;
        k -= cnt[mex];
        mex++;
    }

    cout << mex;
}
