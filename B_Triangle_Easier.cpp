#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    vector<vector<int>> g(n+1, vector<int>(n+1,0));

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u][v]=g[v][u]=1;
    }

    int ans=0;

    for(int a=1;a<=n;a++){
        for(int b=a+1;b<=n;b++){
            if(!g[a][b]) continue;
            for(int c=b+1;c<=n;c++){
                if(g[a][c] && g[b][c]) ans++;
            }
        }
    }

    cout<<ans;
}
