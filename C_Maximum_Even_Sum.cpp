#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findDivisor (int n) {
  if(n == 1) return 1; 

  for(int i = 2; i * i <= n ; i++) 
    if(n % i == 0)  return  n / i ;  

  return n;
}

void solve () {
  int a, b; cin >> a >> b;

  int k = findDivisor(b); 
  
  int xa = a * k;
  int xb = b / k;
   
   if((xa + xb) % 2 == 0) cout << xa + xb << '\n';
   else cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
