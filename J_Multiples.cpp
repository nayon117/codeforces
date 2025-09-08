#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int a,b; cin >> a >> b;
   if(a % b == 0 || b % a == 0) cout << "Multiples\n";
   else cout << "No Multiples\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
