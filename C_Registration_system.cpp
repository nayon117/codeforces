#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   unordered_map <string,int> mp;
   int n; cin >> n;
   string s; 
   while(n--) {
        cin >> s;
        if(!mp.count(s)) {
            mp[s] = 0;
            cout << "OK\n";
        } else {
            int k = ++mp[s];
            string t = s + to_string(k);
            cout << t << "\n";
        }
   }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
