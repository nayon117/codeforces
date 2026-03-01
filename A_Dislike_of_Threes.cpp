#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;

        int cnt = 0, num = 1;
        while(true){
            if(num % 3 != 0 && num % 10 != 3){
                cnt++;
                if(cnt == k){
                    cout << num << '\n';
                    break;
                }
            }
            num++;
        }
    }
}
