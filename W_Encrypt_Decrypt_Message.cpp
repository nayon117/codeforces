#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; string s;
    cin >> q >> s;
    
    string org = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    
    string ans = "";
    for(char c : s){
        if(q == 1) ans += key[org.find(c)];
        else ans += org[key.find(c)];
    }
    cout << ans;
}
