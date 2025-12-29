#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n;
   string s = "", a;
   for (int i = 0; i < n; i++){
    cin >> a;
    string L = a + s;
    string R = s + a;
    s = min(L,R);
   }
   cout <<  s << '\n';

}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
