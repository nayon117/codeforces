#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int n,q; cin >> n >> q;

    map<int,int> r,c;
    set<int> fr,fc;

    for(int i = 1;i <= n;i++){
        fr.insert(i);
        fc.insert(i);
    }

    while(q--){
        int t; cin >> t;
        if(t==1){
            int x,y; cin >> x >> y;
            if(r[x]==0) fr.erase(x);
            if(c[y]==0) fc.erase(y);
            r[x]++; 
            c[y]++;
        }
        else if(t==2){
            int x,y; cin >> x >> y;
            r[x]--; 
            if(r[x]==0) fr.insert(x);
            c[y]--; 
            if(c[y]==0) fc.insert(y);
        }
        else{
            int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
            int a = *fr.lower_bound(x1);
            int b = *fc.lower_bound(y1);

            bool badRow = (a>=x1 && a<=x2);
            bool badCol = (b>=y1 && b<=y2);

            if(badRow && badCol) cout<<"No\n";
            else cout<<"Yes\n";
        }
    }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
