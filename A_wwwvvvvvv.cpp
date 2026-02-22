#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    int ans = 0;
    for(char c : S){
        if(c == 'v') ans += 1;
        else ans += 2;
    }

    cout << ans << '\n';
}
