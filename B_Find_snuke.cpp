#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> g(h);
    for (int i = 0; i < h; i++)
        cin >> g[i];
    string t = "snuke";
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (g[i][j] != 's')
                continue;
            for (int d = 0; d < 8; d++)
            {
                int x = i, y = j;
                vector<pair<int, int>> v;
                for (int k = 0; k < 5; k++)
                {
                    int nx = i + dx[d] * k, ny = j + dy[d] * k;
                    if (nx < 0 || ny < 0 || nx >= h || ny >= w)
                        break;
                    if (g[nx][ny] != t[k])
                        break;
                    v.push_back({nx + 1, ny + 1});
                }
                if (v.size() == 5)
                {
                    for (auto &p : v)
                        cout << p.first << " " << p.second << "\n";
                    return 0;
                }
            }
        }
    }
}
