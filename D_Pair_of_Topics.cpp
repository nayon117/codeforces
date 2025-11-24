#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    vector<long long> d(n);

    for(int i=0;i<n;i++) cin >> d[i];
    for(int i=0;i<n;i++){
        long long x; cin >> x;
        d[i] -= x;
    }

    sort(d.begin(), d.end());
    long long ans = 0;

    for(int i=0;i<n;i++){
        if(d[i] <= 0) {
            auto it = upper_bound(d.begin(), d.end(), -d[i]);
            ans += d.end() - it;
        } 
        else ans += n - i - 1;
    }

    cout << ans;
}
