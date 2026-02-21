#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        if(k > (n + 1) / 2){
            cout << -1 << '\n';
            continue;
        }

        vector<string> board(n, string(n, '.'));
        for(int i = 0; i < k; i++){
            board[2 * i][2 * i] = 'R';
        }

        for(int i = 0; i < n; i++)
            cout << board[i] << '\n';
    }
}
