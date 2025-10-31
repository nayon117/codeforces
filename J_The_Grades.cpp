#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    struct F{string name; int a,m,s,e,sum;};
    vector<F> v(n);
    for(auto &x:v){
        cin >> x.name >> x.a >> x.m >> x.s >> x.e;
        x.sum = x.a + x.m + x.s + x.e;
    }
    sort(v.begin(), v.end(), [](F &x, F &y){
        if(x.sum != y.sum) return x.sum > y.sum;
        return x.name < y.name;
    });
    for(auto &x:v)
        cout << x.name << " " << x.sum << " " << x.a << " " << x.m << " " << x.s << " " << x.e << "\n";
}
