#include<bits/stdc++.h>
using namespace std;
int u,v,n,m;
const int x = 1e5 + 10;
bool vis[x];
int a[x];
vector <int> adj[x];

int dfs(int i)
{
    int mn = a[i];
    vis[i] = true;
    for(int j = 0 ; j < adj[i].size() ; j++)
    {
        if(!vis[adj[i][j]])
        {
            mn = min(mn,dfs(adj[i][j]));
        }
    }
    return mn;
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    long long int ans = 0;
    for(int i  =1 ; i <= n ; i++)
    {
        if(!vis[i]) ans += dfs(i);
    }
    cout << ans << endl;

    return 0;
}
