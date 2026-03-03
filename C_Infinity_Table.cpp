#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long k;
        cin >> k;

        long long x = ceil(sqrt((long double)k));
        long long prev = (x - 1) * (x - 1);
        long long mid = prev + x;

        if(k <= mid){
            cout << k - prev << " " << x << '\n';
        } else {
            cout << x << " " << x * x - k + 1 << '\n';
        }
    }
}
