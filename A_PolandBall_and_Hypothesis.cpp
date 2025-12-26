#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll x){
    if(x < 2) return false;
    for(ll i = 2; i * i <= x; i++)
        if(x % i == 0) return false;
    return true;
}

void solve () {
    ll n;
    cin >> n;
    for(ll m = 1; m <= 1000; m++){
        if(!prime(n * m + 1)){
            cout << m;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
