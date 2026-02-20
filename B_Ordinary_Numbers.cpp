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

        long long ans = 0;
        for(int len = 1; len <= 9; len++){
            for(int d = 1; d <= 9; d++){
                long long num = 0;
                for(int i = 0; i < len; i++)
                    num = num * 10 + d;
                if(num <= n) ans++;
            }
        }

        cout << ans << '\n';
    }
}
