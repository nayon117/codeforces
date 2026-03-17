#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<long long> A(n), B(m);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    int i = 0, j = 0, pos = 1;
    vector<int> pa(n), pb(m);

    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            pa[i] = pos++;
            i++;
        }
        else
        {
            pb[j] = pos++;
            j++;
        }
    }

    while (i < n)
        pa[i++] = pos++;
    while (j < m)
        pb[j++] = pos++;

    for (int x : pa)
        cout << x << " ";
    cout << "\n";
    for (int x : pb)
        cout << x << " ";
}
