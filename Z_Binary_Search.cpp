#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n, m; cin >> n >> m;
   
   vector<int>a(n);
   for (auto &i : a) cin >> i;
   sort(a.begin(), a.end());

   while(m--) {
        int x; cin >> x;
        if(binary_search(a.begin(),a.end(),x))cout << "found\n";
        else cout << "not found\n";   
   }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
