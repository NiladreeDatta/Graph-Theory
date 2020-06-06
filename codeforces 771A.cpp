#include<bits/stdc++.h>
using namespace std;
const int mx = 150005;
bool vis[mx];
vector <long long> adj[mx];
long long  n,m,edge,node;

void dfs(long long u)
{
    vis[u] = true;
    node++;
    for(auto v : adj[u])
    {
        edge++;
        if(!vis[v])
            dfs(v);
    }
}

int main()
{
    cin >> n >> m;
    for(long long i = 0 ; i < m ; i++)
    {
        long long u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(long long  i = 1 ; i <= n ; i++)
    {
        node = 0;
        edge = 0;
        if(!vis[i]) dfs(i);
        if(edge != node*(node-1))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
