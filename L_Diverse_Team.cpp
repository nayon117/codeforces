#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    map<int,int> mp; 
    for (int i = 0; i < n; i++)
        if (!mp.count(a[i])) mp[a[i]] = i + 1; 
    
    if ((int)mp.size() < k) cout << "NO";
    else {
        cout << "YES\n";
        int cnt = 0;
        for (auto [val, idx] : mp) {
            cout << idx << " ";
            if (++cnt == k) break;
        }
    }
}
