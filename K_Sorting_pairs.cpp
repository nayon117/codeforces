#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<string,int>> v(n);
    for(auto &x : v) cin >> x.first >> x.second;
    
    sort(v.begin(), v.end(), [](auto &a, auto &b){
        if(a.second != b.second) return a.second > b.second; 
        return a.first < b.first; 
    });
    
    for(auto &x : v)
        cout << x.first << " " << x.second << "\n";
}
