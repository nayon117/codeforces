#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    vector<int> yellow(N + 1, 0);
    vector<bool> removed(N + 1, false);

    while(Q--){
        int c, x;
        cin >> c >> x;

        if(c == 1){
            if(!removed[x]){
                yellow[x]++;
                if(yellow[x] == 2) removed[x] = true;
            }
        }
        else if(c == 2){
            if(!removed[x]) removed[x] = true;
        }
        else{
            cout << (removed[x] ? "Yes\n" : "No\n");
        }
    }
}
