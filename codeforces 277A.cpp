#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 20;
vector <int> adj[mx];
bool vis[mx];
int c = 0,k,n,m,ans;
void dfs(int u)
{
    vis[u] = true;
    for(auto v : adj[u])
    {
        if(!vis[v]) dfs(v);
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        int t;
        cin >> t;
        c += t;
        for(int j = 0 ; j < t ; j++)
        {
            cin >> k;
            adj[i+m].push_back(k-1);
            adj[k-1].push_back(i+m);
        }
    }
    if(c == 0)
    {
        cout << n << endl;
        return 0;
    }
    for(int i = m ; i < n+m ; i++)
    {
        if(!vis[i])
        {
            ans++;
            dfs(i);
        }
    }
    cout << ans - 1 << endl;


    return 0;
}
