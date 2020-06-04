#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 100;
vector <int> adj[mx];
vector <int> temp;
bool vis[mx];
int n,m;
long long ans = 1, increment = 1;
void dfs(int u)
{
    vis[u] = true;
    temp.push_back(u);
    for(int i = 0 ; i < adj[u].size() ; i++)
    {
        int v = adj[u][i];
        if(!vis[v])
            dfs(v);
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(!vis[i] || i == n)
        {
            for(int j = 2 ; j <= temp.size() ; j++)
                ans *= 2;
            temp.clear();
            dfs(i);
        }
    }
    cout << ans << endl;

    return 0;
}
