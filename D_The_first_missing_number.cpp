#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    unordered_set<int> s;
    for (int i = 0, x; i < N; i++) cin >> x, s.insert(x);
    for (int x = -M; x <= M; x++)
        if (!s.count(x)) return cout << x, 0;
}
