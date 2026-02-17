#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++){
            string s = "";
            for(int j = 0; j < i; j++) s += "()";
            for(int j = 0; j < n - i; j++) s = "(" + s + ")";
            cout << s << '\n';
        }
    }
}
