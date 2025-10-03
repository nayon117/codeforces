#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   string s1,s2;
   cin >> s1 >> s2;
   if(lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end())) {
        cout << s1 << '\n';
   }  
   else cout << s2 << '\n';

}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
