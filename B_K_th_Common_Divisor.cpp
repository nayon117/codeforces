#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int A,B,K; cin >> A >> B >> K;
    int g=__gcd(A,B);
    vector<int>v;
    for(int i=1;i*i<=g;i++) if(g%i==0){
        v.push_back(i);
        if(i*i!=g) v.push_back(g/i);
    }
    sort(v.rbegin(),v.rend());
    cout<<v[K-1];  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
