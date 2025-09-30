#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<string>a(n);
    for(auto &r:a) cin>>r;
    int x,y; cin>>x>>y;
    x--,y--; 
    
    int dx[]={-1,-1,-1,0,0,1,1,1};
    int dy[]={-1,0,1,-1,1,-1,0,1};
    
    for(int k=0;k<8;k++){
        int nx=x+dx[k], ny=y+dy[k];
        if(nx>=0 && ny>=0 && nx<n && ny<m){
            if(a[nx][ny]!='x'){
                cout<<"no"; return 0;
            }
        }
    }
    cout<<"yes";
}
