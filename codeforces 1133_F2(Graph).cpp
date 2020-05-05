#include<bits/stdc++.h>
using namespace std;
long long int n,m,d;
const int mx = 200005;
vector <int> adj[mx];
bool vis[mx];
int p[mx];
void dfs(int v)
{
    vis[v] = true;
    for(int u : adj[v])
    {
        if(!vis[u])
        {
            p[u] = v;
            dfs(u);
        }
    }
}
int main()
{
    cin >> n >> m >> d;
    while(m--)
    {
        int u,v;
        cin  >> u >> v;
        //u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    for(int u : adj[1])
    {
        if(p[u] == 1)
        {
            d--;
        }
    }
    for(int u : adj[1])
    {
        if( d > 0 and p[u] != 1)
        {
            d--;
            p[u] = 1;
        }
    }
    /*for(int i = 1 ; i <= n ; i++)
    {
        if(!vis[i])
            d = -1;
    }*/
    if( d != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(int i = 2 ; i <= n ; i++)
    {
        cout << p[i] << " "  << i<< endl;
    }
    return 0;
}
