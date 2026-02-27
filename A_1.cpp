#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    for (int i = 1, a; i <= N; i++) {
        cin >> a;
        if (a == X) cout << i;
    }
}
