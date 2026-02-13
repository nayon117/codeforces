#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H, W;
    cin >> H >> W;

    int cnt = 0;
    for(int i = 0; i < H; i++){
        string s;
        cin >> s;
        for(char c : s){
            if(c == '#') cnt++;
        }
    }

    cout << cnt << '\n';
}

