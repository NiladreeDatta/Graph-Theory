#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 10;
int n,u,v;
int cnt[2];
int vis[mx];
vector <int> adj[mx];
void dfs(int node,int color)
{
    cnt[color]++;
    vis[node] = true;
    for(int i = 0 ; i < adj[node].size() ; i++)
    {
        if(!vis[adj[node][i]])
            dfs(adj[node][i],!color);
    }
}

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n-1 ; i++)

    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    cout << (long long)cnt[0]*cnt[1] - (n-1) << endl;
    return 0;
}

