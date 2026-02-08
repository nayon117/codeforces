#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    int N; string S;
    cin >> N >> S;

    for(int i = 1; i < N; i++){
        if(S[i] == S[i - 1]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
     solve ();
    return 0;
}
