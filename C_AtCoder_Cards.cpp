#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n + 2, 1e9);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int l = 1, r = n;

    while (l < r)
    {
        int mid = (l + r) / 2;
        if (a[mid] < a[mid + 1])
            r = mid;
        else
            l = mid + 1;
    }

    cout << l << "\n";
}
