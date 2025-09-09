#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   int n; cin >> n; 
   vector<int> a(n);
   for (auto &i : a) cin >> i;
   int even = 0, odd = 0, pos = 0, neg = 0;

   for (int i = 0; i < n; i++) {
    if(a[i] < 0) neg++;
    else if(a[i] > 0) pos++;
    if(a[i] %2 == 0) even++;
    else odd++;
   }  
   
   cout << "Even: " <<  even << '\n';
   cout << "Odd: " << odd << '\n';
   cout << "Positive: " << pos << '\n';
   cout << "Negative: " << neg << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
