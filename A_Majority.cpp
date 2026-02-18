#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int cnt = 0;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(s == "For") cnt++;
    }

    if(cnt > N / 2) cout << "Yes\n";
    else cout << "No\n";
}
