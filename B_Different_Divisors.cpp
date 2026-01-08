#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int d; cin >> d;
    vector<int> prime;
    vector<bool> isPrime(30001, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= 30000; i++){
        if(isPrime[i]){
            prime.push_back(i);
            if((ll)i * i <= 30000)
                for(ll j = (ll)i * i; j <= 30000; j += i)
                    isPrime[j] = false;
        }
    }

    int p = 0, q = 0;

    for(int x : prime)
        if(x >= d + 1){
            p = x;
            break;
        }

    for(int x : prime)
        if(x >= p + d){
            q = x;
            break;
        }

    cout << (ll)p * q << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
