#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n; 
    cin >> n;
    ll e1=-1,e2=-1,o1=-1,o2=-1;
    for(int i=0;i<n;i++){
        ll x; cin >> x;
        if(x%2==0){
            if(x>e1) e2=e1, e1=x;
            else if(x>e2) e2=x;
        }else{
            if(x>o1) o2=o1, o1=x;
            else if(x>o2) o2=x;
        }
    }
    ll ans=-1;
    if(e2!=-1) ans=max(ans,e1+e2);
    if(o2!=-1) ans=max(ans,o1+o2);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}

