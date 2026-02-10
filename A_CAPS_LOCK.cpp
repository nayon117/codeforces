#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S; cin >> S;
    for(char &c : S) c = toupper(c);
    cout << S << '\n';
}
