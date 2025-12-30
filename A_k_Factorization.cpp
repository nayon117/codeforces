#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int k; cin >> n >> k;
    vector<long long> a;
    for(long long i = 2; i * i <= n && a.size() < k - 1; i++){
        while(n % i == 0 && a.size() < k - 1){
            a.push_back(i);
            n /= i;
        }
    }
    if(n > 1) a.push_back(n);
    if(a.size() != k){
        cout << -1;
        return 0;
    }
    for(auto x : a) cout << x << " ";
}
