#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for(char c : s) freq[c - 'a']++;

        int pairs = 0, single = 0;
        for(int i = 0; i < 26; i++){
            if(freq[i] >= 2) pairs++;
            else if(freq[i] == 1) single++;
        }

        int k = pairs + single / 2;
        cout << k << '\n';
    }
}
