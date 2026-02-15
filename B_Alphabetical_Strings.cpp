#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        int pos = s.find('a');

        if(pos == -1){
            cout << "NO\n";
            continue;
        }

        int l = pos, r = pos;
        char cur = 'b';
        bool ok = true;

        while(cur < 'a' + n){
            if(l > 0 && s[l - 1] == cur) l--;
            else if(r + 1 < n && s[r + 1] == cur) r++;
            else{
                ok = false;
                break;
            }
            cur++;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
