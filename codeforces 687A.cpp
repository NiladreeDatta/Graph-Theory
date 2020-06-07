#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 10;
int n,m,u,v;
vector <int> adj[mx];
vector <int> col[2];
int vis[mx];

bool dfs(int v,int color = 2)
{
    vis[v] = color;
    col[color-1].push_back(v);
    for(int u : adj[v])
    {
        if(!vis[u] and dfs(u,3-color))
            return 1;
        if(vis[u] != 3-color)
            return 1;
    }
    return 0;
}

int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(!vis[i])
        {
            if(adj[i].empty())
                continue;
            if(dfs(i))
            {
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    for(int i = 0 ; i < 2 ;i++)
    {
        cout << col[i].size() << endl;
        for(int v : col[i])
            cout << v << " ";
        cout << endl;
    }
    return 0;
}
