#include<bits/stdc++.h>
using namespace std;
const int x = 1e5 + 10;
vector <int> adj[x];
bool vis[x];
int a[x];
int n,m,k,u,v,cnt,total,mx,ans;

void dfs(int v)
{
    cnt++;
    vis[v] = true;
    for(auto u  : adj[v])
    {
        if(!vis[u]) dfs(u);
    }
}

int main()
{
    cin >> n >> m >> k;
    for(int i = 0 ; i < k ; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    for(int i = 0 ; i < m ; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 0 ; i < k ; i++)
    {
        cnt = 0;
        dfs(a[i]);
        total += cnt;
        mx = max(mx,cnt);
        ans += cnt*(cnt-1)/2;
    }
    total = n - total + mx;
    ans += total*(total-1)/2 - (mx*(mx-1))/2 ;
    cout << ans - m << endl;


    return 0;
}
