#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n) {
  int cnt = 0;
  for(int i = 1; i <=n; i++) if(n % i == 0) cnt++;
  
  if(cnt == 2) return true;
  else return false;
}

void solve () {
     int n; cin >> n;
     for (int i = 1; i <= n; i++) {
      if(isPrime(i)) cout << i << " ";
     }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
