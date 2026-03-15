#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int H, W;
    cin >> H >> W;

    vector<string> A(H), B(H);
    for (int i = 0; i < H; i++)
        cin >> A[i];
    for (int i = 0; i < H; i++)
        cin >> B[i];

    for (int s = 0; s < H; s++)
    {
        for (int t = 0; t < W; t++)
        {
            bool ok = true;
            for (int i = 0; i < H; i++)
            {
                for (int j = 0; j < W; j++)
                {
                    if (A[(i + s) % H][(j + t) % W] != B[i][j])
                        ok = false;
                }
            }
            if (ok)
            {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
}
