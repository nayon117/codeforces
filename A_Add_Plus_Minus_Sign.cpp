#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n;
    string a;
    cin >> n >> a;

    int cur = a[0] - '0';
    string res;

    for(int i = 1; i < n; i++){
        int v = a[i] - '0';
        if(cur >= 0){
            res.push_back('-');
            cur -= v;
        }else{
            res.push_back('+');
            cur += v;
        }
    }
    cout << res << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
