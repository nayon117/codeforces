#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    for(int i = 0; i < N; i++) cin >> S[i];

    unordered_set<string> st;
    for(int i = 0; i < M; i++){
        string x;
        cin >> x;
        st.insert(x);
    }

    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(st.count(S[i].substr(3,3))) cnt++;
    }

    cout << cnt << '\n';
}
