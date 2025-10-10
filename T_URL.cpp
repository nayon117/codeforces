#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin, s);
    s = s.substr(s.find('?') + 1); 
    stringstream ss(s);
    string part;
    while (getline(ss, part, '&')) {
        int pos = part.find('=');
        cout << part.substr(0, pos) << ": " << part.substr(pos + 1) << "\n";
    }
}
