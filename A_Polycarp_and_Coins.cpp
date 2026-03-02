#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        long long c2 = n / 3;
        long long rem = n % 3;

        if(rem == 0){
            cout << c2 << " " << c2 << '\n';
        }
        else if(rem == 1){
            cout << c2 + 1 << " " << c2 << '\n';
        }
        else{
            cout << c2 << " " << c2 + 1 << '\n';
        }
    }
}
