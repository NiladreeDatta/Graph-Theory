#include<bits/stdc++.h>
using namespace std;
const int mx = 5e4 + 20;
bool vis[mx];
vector <int> adj[mx];
int n,r1,r2,u,ans[mx];

void dfs(int u,int p)
{
    vis[u] = true;
    ans[u] = p;
    for(int i = 0 ; i < adj[u].size() ; i++)
    {
        int v = adj[u][i];
        if(!vis[v])
        {
            dfs(v,u);
        }
    }
}

int main()
{
    cin >> n >> r1 >> r2;
    for(int i = 1 ; i <= n ; i++)
    {
        if(i != r1)
        {
            cin >> u;
            adj[i].push_back(u);
            adj[u].push_back(i);
        }
    }
    dfs(r2,0);
    for(int i = 1 ; i <= n ; i++)
    {
        if(i!= r2) cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
