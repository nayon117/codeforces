#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
   float x, y;
   cin >> x >> y;
   if(x > 0 && y > 0) cout << "Q1\n";  
   else if(x < 0 && y > 0) cout << "Q2\n";
   else if(x < 0 && y < 0) cout << "Q3\n";
   else if(x > 0 && y < 0) cout << "Q4\n";
   else if(x == 0 && y == 0) cout << "Origem\n";
   else if(x == 0 && y) cout << "Eixo Y\n";
   else if(x && y == 0) cout << "Eixo X\n";
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
