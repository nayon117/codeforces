#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
     int N, A, B;
    cin >> N >> A >> B;
    int sum = A + B;

    for(int i = 1; i <= N; i++){
        int x;
        cin >> x;
        if(x == sum){
            cout << i << '\n';
            break;
        }
    }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
