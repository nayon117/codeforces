#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];

    vector<int> vis(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        int j = i;
        while (j <= n - 1 && binary_search(a.begin(), a.end(), j))
            j++;
        for (int k = j; k >= i; k--)
            cout << k << " ";
        for (int k = i; k <= j; k++)
            vis[k] = 1;
        i = j;
    }
}
